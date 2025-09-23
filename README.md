# HAIPro Documentation 📝

Advanced AI plugin with a ready to use perception system, runtime control of Behavior Trees and State Trees from a single component, token based NPC task prioritization, and example tasks for both Behavior Tree and State Tree.

## Features
- **Token Based prioritization** - Flexible token system for controlling execution orders for NPCs.
- **Advanced Patrol Spline** - Per actor patrol data with automatic direction switching.
- **Single Component AI Management** - Configure Perception, Behavior Tree, State Tree, Patrol data, etc. all from one component.
- **Flexible Perception System** - Adjust Sight, Hearing, and Damage sensing directly in the component and receive stimuli without extra setup.
- **Example Tasks** - Some simple example tasks for Behavior and State Tree.

------------------------------------

## HAIPro Plugin: Basic Setup and Usage
This guide will help you set up and use the HAIPro Plugin.

### Assigning the HAIController
<img width="777" height="72" alt="Screenshot 2025-09-24 010208" src="https://github.com/user-attachments/assets/9dae465f-1976-4759-96cf-fc3d9e73da8c" />

To use the **HAIController** for your NPCs:

1. Open the NPC Blueprint.
2. In the **Class Defaults**, locate the **AI Controller Class** property.
3. Select **HAIController** from the dropdown list.
4. Save the Blueprint.

--------------------------------
   
### Adding the HAI Base Component & Configuring Perception  <img width="768" height="894" alt="Screenshot 2025-09-24 004543" src="https://github.com/user-attachments/assets/99ab9bd5-7d6d-4802-a723-e1307ff29753" />
<img width="158" height="31" alt="Screenshot 2025-09-24 010006" src="https://github.com/user-attachments/assets/2d407c87-3a85-4cd1-9445-6acc2bc6d348" />

- **You can assign your patrol point into the component**
- **Assign your Behavior or State Tree into the component and if you want you can trigger them to start at Begin Play**
- **You can enable or disable perception and also you can decide to dominant sense and sense's values**
<img width="1052" height="1164" alt="Screenshot 2025-09-24 013619" src="https://github.com/user-attachments/assets/81e9c4ad-885b-468b-8186-b0327b47fc9e" />
<img width="1337" height="1170" alt="Screenshot 2025-09-24 005744" src="https://github.com/user-attachments/assets/fa69926c-f8c1-4477-a32f-181e824da2e5" />

-------------------------------

### Token System      <img width="183" height="26" alt="Screenshot 2025-09-24 010009" src="https://github.com/user-attachments/assets/d80d5ae3-8010-4663-811c-4932c22eb25c" />
<img width="775" height="89" alt="Screenshot 2025-09-24 010001" src="https://github.com/user-attachments/assets/03c6a4e1-d268-4e27-92cd-60f0988b5979" />

- **!!!** Both the giver (e.g., NPC, player, or object) and the receiver (e.g., NPC or another entity) must have the **HToken System Component**.

<img width="1039" height="455" alt="Screenshot 2025-09-24 013929" src="https://github.com/user-attachments/assets/7866fe95-d635-470a-b1e6-253b92371676" />
<img width="1215" height="1043" alt="Screenshot 2025-09-24 005949" src="https://github.com/user-attachments/assets/1651679d-d00b-4a25-8143-3e3280b8aeea" />


--------------------------------------

## Behavior and State Tree Example Tasks

<img width="625" height="311" alt="Screenshot 2025-09-24 012324" src="https://github.com/user-attachments/assets/ee5d4f84-2e8c-4d0c-b135-ce66fd126f0b" />
<img width="1040" height="401" alt="Screenshot 2025-09-24 012346" src="https://github.com/user-attachments/assets/e33551b8-a047-4b7d-a8fe-d612b3150619" />



