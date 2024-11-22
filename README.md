# HAIPro
# HAIPro Plugin Documentation
![plugin](https://github.com/user-attachments/assets/740a6c0b-39e3-4314-9375-934a9759ca05)

## Introduction 
This plugin offers an Advanced AI management model with features like token-based task prioritization for NPCs, integration with an Advanced AIController using the CrowdFollowing component, and flexible multi-action support through the DoAction task within the Behavior Tree.

-In future updates, this system will be integrated with H3DPathfinding, which I developed in Unreal Engine.

-The example behaviour tree, blackboard and 2 EQS are available in the plugin's content folder. 
-To access them, you need to tick the ‘Show Engine Content’ and ‘Show Plugin Content’ settings in the content browser (drawer).

![image](https://github.com/user-attachments/assets/9710cf6f-d2a2-4a35-b48d-543bd348548f)    ![Ekran görüntüsü 2024-11-20 180927](https://github.com/user-attachments/assets/4967a7cd-821d-4230-a311-5b25fd165dc1)
![Ekran görüntüsü 2024-11-20 180935](https://github.com/user-attachments/assets/183c7d96-e5a2-4bd7-9f5f-eb332bb9a28e)

## Contents

- [Supported Versions](#supported-versions)
- [Installation Instructions](#installation-instructions)
- [Some Features](#some-features)
- [Architecture and Blueprint/C++ Examples](#architecture-and-blueprintc-examples)
     - [HAI Base Component](#hai-base-component)
     - [HToken System](#htoken-system)
     - [HAI Controller (with Crowd Following Component)](#hai-controller-with-crowd-following-component)
     - [Tasks](#tasks)
     - [Decorator & Service](#decorator--service)
     - [EQS](#eqs)
     - [Behavior Tree & Blackboard](#behavior-tree--blackboard)
- [Tutorial Video](#tutorial-video)


## Supported Versions
This plugin is compatible with Unreal Engine 5.2 and later and is designed to work in both Blueprint and C++ projects.

## Installation Instructions

1. **Extract the Plugin File**  
   Extract the downloaded `.zip` file to a folder.

2. **Move the Plugin Folder**  
   Move the extracted plugin folder to the `Engine/Plugins/Marketplace` directory of your Unreal Engine installation. The path is usually:  
   `C:\Program Files\Epic Games\UE_5.2\Engine\Plugins\Marketplace`

3. **Activate the Plugin**  
   Open Unreal Engine, go to `Edit > Plugins`, and enable the plugin.

## Some Features

- **Token-Based Task Prioritization**: NPCs can use tokens to dynamically prioritize tasks. Both the giver and receiver of tokens must have the **HTokenSystem Component** for this system to work.

- **Advanced AIController**: Includes AI Perception for sight, hearing, and damage detection, integrated with the Crowd Following Component for smooth pathfinding and collision avoidance in crowded environments.

- **Flexible Multi-Action Support**: The **DoAction Task** allows NPCs to perform multiple actions dynamically using Action IDs. This system can be used both in behavior trees or independently for custom setups.

- **Customizable Perception System**: Adjust sight, hearing, and damage detection values for each NPC individually via the HAI Base Component.

- **Dynamic Patrol System**: NPCs can follow splines for patrol routes or perform random patrols within a defined area, offering flexible pathing behavior.

- **Seamless Behavior Tree Integration**: Built-in tasks, services, and decorators simplify NPC behavior customization while supporting dynamic decision-making.
  

  # **HAIPro Plugin: Basic Setup and Usage**

This guide will help you set up and use the **HAIPro Plugin** within Unreal Engine for advanced NPC behaviors, patrols, and task management.

---

## **1. Assigning the HAI AIController**

To use the HAI AIController for your NPCs:

1. Open the NPC Blueprint.
2. In the **Class Defaults**, locate the **AI Controller Class** property.
3. Select **HAIController** from the dropdown list.
4. Save the Blueprint.

---

## **2. Adding the HAI Base Component & Configuring Perception**

### **Adding the HAI Base Component**
1. Open your NPC Blueprint.
2. Add the **HAI Base Component** through the **Components** panel.

### **Configuring Perception**
1. Adjust detection variables in the **HAI Base Component**, such as:
   - `Sight Radius`: Maximum range for sight detection.
   - `Peripheral Vision Angle Degrees`: Field of view for sight.
   - `Hearing Range`: Maximum range for sound detection.
   - `Dominant Sense`: Primary detection method (e.g., Sight).

2. Toggle specific senses using:
   - `Open Sight`, `Open Hear`, `Open Damage` (enable/disable sight, hearing, and damage detection).

3. Ensure proper Blackboard integration:
   - Use the **CanTookToken** service to manage task prioritization.
   - Assign a Blackboard boolean (e.g., `canDoAction`) to the **DoAction** task to reset it after use.

---

## **3. Setting Up the Behavior Tree**

### **Using Example Files**
- The plugin includes an example **Behavior Tree**, two **EQS setups**, and a **Blackboard** in the plugin’s **Content** folder.
- Enable **Show Engine Content** and **Show Plugin Content** in the Content Browser to access these files.

### **Building Your Own Behavior Tree**
1. Use the example Behavior Tree as a reference.
2. Add plugin tasks, decorators, and services such as:
   - **Tasks**: `DoAction`, `Find Next Patrol Node`, `Set State Passive`
   - **Services**: `CanTookToken`
   - **Decorators**: `Has Patrol Route`

### **Blackboard Setup**
1. Add required keys like:
   - `targetActor`: Focused target for the NPC.
   - `OnPossessState`: Current state (e.g., Passive, Active, Investigating).
   - `pointOfInterest`: Location of interest.
   - `canDoAction`: Boolean indicating if an action can be performed.
2. Assign default values to avoid errors.

### **EQS Queries**
- Use the included EQS setups:
  - `FindIdealRange_Example`: Finds optimal positions based on visibility and distance.
  - `Strafe_Example`: Generates strafing positions around the target actor.

---

## **4. Configuring Patrol Behavior**

### **Setting Up Patrols**
1. Add a **Spline Component** in your NPC Blueprint and define patrol points.
2. Assign the spline to the **Patrol Spline** property in the **HAI Base Component**.

### **Behavior Tree Integration**
- Use the **Find Next Patrol Node** task to make the NPC follow the patrol path.

### **Dynamic Patrol Management**
- Manage how many NPCs can perform a patrol or action simultaneously.
- Adjust token settings in the **HToken System Component** to control task limits.

---

## **5. Using the Token System**

### **Purpose**
The **HToken System** manages task prioritization, ensuring smooth execution of tasks for NPCs or other entities (e.g., players, objects).

### **Requirements**
1. Both the giver (e.g., NPC, player, or object) and the receiver (e.g., NPC or another entity) must have the **HToken System Component**.

### **Behavior Tree Integration**
1. Use the **CanTookToken** service in the Behavior Tree:
   - It checks if a token can be taken and updates a Blackboard boolean to `true`.
2. Combine with the **DoAction** task:
   - Assign the Blackboard boolean (e.g., `canDoAction`) to the task.
   - The task marks the token as taken and resets the boolean to `false` after completion.

### **Direct Token Management**
1. Use functions in the **HToken System Component**:
   - `Took Token From Target`: Takes a token from the target.
   - `Give Token To Target`: Gives a token to the target.

### **Managing Simultaneous Actions**
- Use tokens to limit how many NPCs or entities can perform a task at the same time.
- Adjust the number of tokens available to fine-tune task management.

---

By following this guide, you can set up intelligent NPC behaviors, patrols, and task prioritization systems using the **HAIPro Plugin**.




## Architecture and Blueprint/C++ Examples


- ### HAI Base Component:![aibase](https://github.com/user-attachments/assets/03bb5dd0-c482-40d8-9d74-f8ac236ebe58)
- The HAI Base Component is the core of NPC behavior, integrating seamlessly with AI Perception for sight, hearing, and damage detection. It supports DoAction events, allowing dynamic tasks and smooth behavior tree integration for flexible and adaptive NPC actions.
     - ## HAI Base Component Events and Functions
 
       ![all haibase](https://github.com/user-attachments/assets/d651468d-e47a-48d9-aff8-f1d38791e862)   ![Ekran görüntüsü 2024-11-20 174008](https://github.com/user-attachments/assets/5d176721-4b58-4fc5-8472-87ce6a98172a)   ![ondoActionc++](https://github.com/user-attachments/assets/3cfc090a-1cb9-4fac-9338-7e766ba1b2d1)  ![Ekran görüntüsü 2024-11-20 174700](https://github.com/user-attachments/assets/c8335686-7144-40cb-890d-fa2db061a25a)
       
        - **!!! 1.On Do Action**: It is triggered when the NPC performs a specific action and carries an Action ID, which indicates the type or purpose of that action. Defined as a delegate in HAIBase, this triggering process can work with the DoAction task in the Behavior Tree or with a custom system you create.
          
        - **!!!! 2.Call On Action End**: Call On Action End works in conjunction with OnDoAction. It must be called at the end of the events triggered by OnDoAction to mark the action as complete. Additionally, it finalizes the currently running DoAction task in the Behavior Tree. The provided Success value determines whether the action was successful or not.
          
        - **!!!! 3.Bind Event to On Do Action (Assign On Do Action)**: It performs the same function as OnDoAction by responding to specific actions triggered by the NPC with an Action ID. However, the difference is that this node allows you to bind a custom event to the OnDoAction delegate. When OnDoAction is triggered, the assigned custom event is automatically executed, enabling you to define specific behaviors or additional logic for each action.
          
        - **4.Dead**: It simply kills the npc, cleans up any focus the npc has, returns any tokens the npc has taken from someone, and stops the behaviour tree.
          
        - **5.Stop Behavior Tree**: stops the behaviour tree
          
        - **6.Set Movement State Walk**: Sets the npc's walk speed
          
        - **7.Set Movement State Fly**: Sets the npc's fly speed
          
        - **8.GetPossessState**: Returns the OnPossessState of the NPC
          
        - **9.Set State Active**: Sets the NPC's OnPossessState to Active after the specified duration provided in the task.
          
        - **10.Set State Investigate**: Sets the NPC's OnPossessState to Investigate after the specified duration provided in the task.
          
        - **11.Set State Passive**: Sets the NPC's OnPossessState to Passive after the specified duration provided in the task.
          
          
    - ## HAI Varaibles
      
      ![haivaraibles](https://github.com/user-attachments/assets/349713fc-7aa2-471b-92e6-35906efa0cf6)
      
         - **1.Behavior Tree**: The behavior tree asset assigned to the NPC.

         - **2.Targets Tag**: A list of tags representing potential targets the NPC can detect. If left empty, the NPC detects all characters.

         - **3.Walk Speed**: The NPC's walking speed, used for ground movement.

         - **4.Run Speed**: The NPC's running speed, used for faster ground movement.

         - **5.Normal Fly Speed**: The NPC's default flying speed during regular movement.

         - **6.Fast Fly Speed**: The NPC's fast flying speed for high-speed aerial movement.

         - **7.Patrol Spline**: A spline component used to define the NPC's patrol path.

         - **8.Open Sight**: Enables or disables the sight sense in the AI Perception component.

         - **9.Open Hear**: Enables or disables the hearing sense in the AI Perception component.

         - **10.Open Damage**: Enables or disables the damage sense in the AI Perception component.

         - **11.Dominant Sense**: The primary sense of the AI Perception component, typically used for prioritizing detection (e.g., sight).

         - **12.Sight Radius**: The maximum range within which the AI Perception's sight sense can detect targets.

         - **13.Lose Sight Radius**: The range at which the AI Perception's sight sense loses track of a target.

         - **14.Peripheral Vision Angle Degrees**: The AI Perception's field of view angle for detecting targets with sight.

         - **15.Max Age for Sight**: The maximum duration the AI Perception retains sight information about a target.

         - **16.Hearing Range**: The maximum range within which the AI Perception's hearing sense can detect sounds.

         - **17.Max Age Hear**: The maximum duration the AI Perception retains hearing information.

         - **18.Max Age Damage**: The maximum duration the AI Perception retains damage information.

----------------------------------------------------------------------------------------------------------


- ### HToken System:![token](https://github.com/user-attachments/assets/24ef2bf3-604f-4902-be53-fcb18d784fff)   
- The HToken System is used for prioritizing NPC actions with token-based logic. NPCs can take or give tokens to decide who performs an action, ensuring smooth and fair task execution.
- !!!! To receive a token from a target, both the target and the actor must have the HTokenSystem component
     - ## HToken System Component Functions
 
       ![functions](https://github.com/user-attachments/assets/f456656e-03a2-41f5-89c4-01bb8393fcba)   ![tokenc++](https://github.com/user-attachments/assets/cb45a7ce-bb78-4359-a582-c96b60da620e)
       
          - **1.Took Token from Target**: Request to take token from the target actor with the given amount of tokens and returns back whether the request was successful or not. This is used in the CanTookToken service.
            
          - **2.Give Token to Target**: Gives the token in the target actor entered in the entered amount. This is used in DoAction task if Token Tooked is true.
            
     - ## HToken System Component Varaibles
 
       ![varaible](https://github.com/user-attachments/assets/0519b55e-b7c2-4bea-83f9-d4faf7d54dea)
       
          - **1.Current Token**: The amount of tokens owned by the character who has this component
            
          - **2.Token Map**: Do not touch if not necessary!!!!. This is the TMap varibles that stores how many tokens these characters have received and from who.

----------------------------------------------------------------------------------------------------------


![Ekran görüntüsü 2024-11-19 151958](https://github.com/user-attachments/assets/9aec9ff3-a641-4c8b-a138-bf87a6a5f47a)
![Ekran görüntüsü 2024-11-19 152520](https://github.com/user-attachments/assets/c697867e-8900-49b0-b660-fac3edc1655c)
- ### HAI Controller (with Crowd Following Component)
  - AI Controller manages NPC behavior with AI Perception for sight, hearing, and damage detection, while using Crowd Following for dynamic pathfinding and collision avoidance in crowded scenes. It also controls OnPossessState transitions for flexible behavior management.
  - You can adjust the values of the senses sight, hearing and damage in the HAI Base Component. And with it you can give different values to EVERY NPC created with the same class and the same aicontroller.

----------------------------------------------------------------------------------------------------------


- ### Tasks:

![Ekran görüntüsü 2024-11-19 154736](https://github.com/user-attachments/assets/a2964214-900f-48ae-94e4-4765d30840f7)

   - **!!!!!!!! 1.DoAction**: The DoAction Task allows NPCs to perform specific actions dynamically using HAI Base Component's DoAction events. For token-based actions, the Token Tooked bool must be set to true, and the target actor (from whom the token will be taken) should be specified because, after the task is completed, this token will be returned to that target. Additionally, if the task depends on a blackboard bool value being true, it should be provided to ensure the task resets the bool to false upon completion.

   - **2.Set Focus**: Allows the NPC to focus on the given blackboard value, which can be either an actor or a vector.
   
   - **3.Clear Focus**: Clears the NPC's current focus and redirects its attention back to the game.
   
   - **4.Set Movement State**: Sets the NPC's speed to one of the provided movement states (Idle, Walking, Running, NormalFlying, FastFlying) based on the selected movement type (Walk or Fly).
   
   - **5.Find Rnadom Point On NavMesh**: Finds a random point within the specified radius on the NavMesh around the NPC and assigns it to the provided vector blackboard key as a location.
   
   - **6.Find Next Patrol Node**: Finds the next patrol location by retrieving the spline assigned to the NPC through the HAIBaseComponent and moving to the next node along the spline.
   
   - **7.Set State Passive**: Sets the NPC's OnPossessState to Passive after the specified duration provided in the task.

   - **8.Set State Investigate**: Sets the NPC's OnPossessState to Investigate after the specified duration provided in the task.

   - **9.Set State Active**: Sets the NPC's OnPossessState to Active after the specified duration provided in the task.


----------------------------------------------------------------------------------------------------------
     

- ### Decorator & Service:

![Ekran görüntüsü 2024-11-19 161948](https://github.com/user-attachments/assets/af767b27-84e0-40e4-a4a4-ceebd6c4d73f)

   - **1.CanTookToken**: Checks if the specified token amount can be taken from the target actor, updating a boolean blackboard key. This value is inversely updated in the DoAction task.

   - **2.Has Patrol Route**: A decorator that verifies whether the NPC has a valid patrol route assigned through a spline. Ensures the NPC can follow a predefined path.
     
   - **3.Is In The Range**: Checks the distance between the NPC and the selected target actor or location. If the distance is within the specified range (e.g., 300 units), it allows the behavior tree to proceed with subsequent tasks or actions.
     
   - **4.Blackboard Value for "OnPossessState"**: Represents the current behavior state of the NPC (e.g., Passive, Active, Investigating). Guides task execution and decision-making processes in the behavior tree.
     
   - **5.Blackboard Value for "CanDoAction"**: Indicates whether the NPC is permitted to perform a specific action. This value must be true for the action to execute; otherwise, it is blocked.

     
----------------------------------------------------------------------------------------------------------


- ### EQS:

![Ekran görüntüsü 2024-11-19 154930](https://github.com/user-attachments/assets/e48ed425-5a14-4ccf-ac2f-e448374f6cfb) ![Ekran görüntüsü 2024-11-19 155426](https://github.com/user-attachments/assets/b0a18cb1-44f2-449d-b25d-5a7537f0d395)

   - **HEnvQueryContext_TargetActor**: A custom EQS context that provides the target actor's location for queries, allowing the NPC (querier) to use this location as a reference in EQS evaluations.

   - **FindIdealRange_Example**: Finds the best position around the querier for optimal range based on visibility and distance to the target.

   - **Strafe_Example**: Generates positions around the target actor for strafing, ensuring effective and strategic movement.


----------------------------------------------------------------------------------------------------------


- ### Behavior Tree & Blackboard:

 ![bt](https://github.com/user-attachments/assets/e004f1b5-ac1d-4e76-a124-88c35b3b9c01) 
![blackboard](https://github.com/user-attachments/assets/dcf9ed70-e6dc-401c-8f28-71a12e456339)
   - **targetActor**: Represents the target actor the NPC is focusing on or interacting with. This value is used to determine the NPC's target during specific tasks or actions.
   - **OnPossessState**: Represents the NPC's current behavior state, such as Passive, Active, or Investigating. Tasks are guided based on this state.
   - **pointOfInterest**: Represents the coordinates of a point the NPC is interested in or focusing on. This is typically the location of a target or an area to investigate.
   - **canDoAction**: Indicates whether the NPC is allowed to perform a specific action. If set to true, the NPC can execute the action; if false, the action is canceled or blocked.


## Tutorial Video
[HAIPro Tutorial](https://youtu.be/Xdd8zPXJ8Gw)
