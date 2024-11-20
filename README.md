# HAIPro
# HAIPro Plugin Documentation
![plugin](https://github.com/user-attachments/assets/740a6c0b-39e3-4314-9375-934a9759ca05)

## Introduction 
This plugin offers an Advanced AI management model with features like token-based task prioritization for NPCs, integration with an Advanced AIController using the CrowdFollowing component, and flexible multi-action support through the DoAction task within the Behavior Tree.

-In future updates, this system will be integrated with H3DPathfinding, which I developed in Unreal Engine.

## Contents

- [Supported Versions](#supported-versions)
- [Installation Instructions](#installation-instructions)
- [Features](#features)
- [Architecture](#architecture)
     - [HAI Base Component](#hai-base-component)
     - [HToken System](#htoken-system)
     - [HAI Controller (with Crowd Following Component)](#hai-controller-with-crowd-following-component)
     - [Tasks](#tasks)
     - [Decorator & Service](#decorator--service)
     - [EQS](#eqs)
     - [Behavior Tree & Blackboard](#behavior-tree--blackboard)


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

## Features

- **Token-Based Task Prioritization**: NPCs can use tokens to dynamically prioritize tasks. Both the giver and receiver of tokens must have the **HTokenSystem Component** for this system to work.

- **Advanced AIController**: Includes AI Perception for sight, hearing, and damage detection, integrated with the Crowd Following Component for smooth pathfinding and collision avoidance in crowded environments.

- **Flexible Multi-Action Support**: The **DoAction Task** allows NPCs to perform multiple actions dynamically using Action IDs. This system can be used both in behavior trees or independently for custom setups.

- **Customizable Perception System**: Adjust sight, hearing, and damage detection values for each NPC individually via the HAI Base Component.

- **Dynamic Patrol System**: NPCs can follow splines for patrol routes or perform random patrols within a defined area, offering flexible pathing behavior.

- **Seamless Behavior Tree Integration**: Built-in tasks, services, and decorators simplify NPC behavior customization while supporting dynamic decision-making.

## Architecture


- ### HAI Base Component:![aibase](https://github.com/user-attachments/assets/03bb5dd0-c482-40d8-9d74-f8ac236ebe58)
- The HAI Base Component is the core of NPC behavior, integrating seamlessly with AI Perception for sight, hearing, and damage detection. It supports DoAction events, allowing dynamic tasks and smooth behavior tree integration for flexible and adaptive NPC actions.
     - ## HAI Base Component Events and Functions
 
       ![all haibase](https://github.com/user-attachments/assets/d651468d-e47a-48d9-aff8-f1d38791e862)   ![Ekran görüntüsü 2024-11-20 174008](https://github.com/user-attachments/assets/5d176721-4b58-4fc5-8472-87ce6a98172a)   ![ondoActionc++](https://github.com/user-attachments/assets/3cfc090a-1cb9-4fac-9338-7e766ba1b2d1)    
       
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


