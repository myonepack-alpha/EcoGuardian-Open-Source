# Contributing to EcoGuardian & AeroCortex

Thank you for your interest in the EcoGuardian Autonomous Drone Network and AeroCortex SoC. We welcome contributions from ecologists, hardware engineers, and policy experts to help us bridge the gap between climate change velocity and species adaptation.

## 1. Governance & Ethics
[cite_start]All contributions must adhere to the **Ecological Primacy** principle: ecosystem health is prioritized over economic utility[cite: 723].

### The Species Intervention Score (SIS)
If you are proposing a new intervention protocol (e.g., a new assisted migration corridor), you must calculate and include the SIS in your Pull Request description:

$$SIS = (E \times 3) + (G \times 2) + (V \times 2) + (1/C) + (1/U)$$

Where:
* [cite_start]**E**: Ecological importance (Keystone/Engineer status) [cite: 786]
* [cite_start]**G**: Genetic distinctiveness [cite: 787]
* [cite_start]**V**: Viability of intervention [cite: 788]
* [cite_start]**C**: Cost resource requirement [cite: 789]
* [cite_start]**U**: Urgency (Time to extinction) [cite: 790]

## 2. Technical Guidelines (AeroCortex X1)

### Hardware & Firmware
* [cite_start]**Safety Criticality:** Changes to the `SAFETY & REDUNDANCY CONTROLLER` or `Fail-Safe FSM` must ensure the **Lockstep CPU** mechanism remains intact[cite: 36, 148].
* [cite_start]**Performance:** Code submissions for the **PKC Predictor Engine** must maintain a latency of <1.2ms (95th percentile) to ensure real-time collision avoidance[cite: 106].
* **Memory Management:** Respect the Unified Memory Architecture (UMA). [cite_start]Do not bypass the `Coherency Engine` when accessing the 32MB L3 SRAM[cite: 26, 118].

### Documentation
* Use the citation format if referencing the original specification.
* Update the **Register Map** in `hardware/memory_map.md` if you add new hardware offsets.

## 3. Reporting Issues
Please use the following labels when opening a new Issue:
* [cite_start]`Phase-1`: Issues related to initial sensing networks (Amazon, Congo, etc.)[cite: 672, 680].
* [cite_start]`Phase-2`: Issues related to active restoration or seed dispersal[cite: 692].
* [cite_start]`Ethical-Framework`: Discussions regarding the "Minimal Intervention" principle[cite: 726].
* [cite_start]`Silicon`: Thermal, electrical, or BGA packaging queries[cite: 232].

## 4. Development Environment
* [cite_start]**SDK:** We use the AeroCortex Runtime (ACR) SDK[cite: 185, 253].
* [cite_start]**Simulation:** Validate all logic using `AC-Simulate` before submitting hardware changes.

---
*By contributing to this repository, you agree that your contributions will be licensed under the Apache License 2.0.*
