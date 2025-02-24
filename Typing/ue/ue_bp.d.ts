/// <reference path="puerts.d.ts" />
declare module "ue" {
    import {$Ref, $Nullable} from "puerts"

    import * as cpp from "cpp"

    import * as UE from "ue"

// __TYPE_DECL_START: 0966E2214E3163CA2652E4AEB4F86987
    namespace Game.ThirdPersonCPP.Blueprints.ThirdPersonCharacter {
        class ThirdPersonCharacter_C extends UE.unreal_puertsCharacter {
            constructor(Outer?: Object, Name?: string, ObjectFlags?: number);
            UberGraphFrame: UE.PointerToUberGraphFrame;
            ExecuteUbergraph_ThirdPersonCharacter(EntryPoint: number) : void;
            InpAxisEvt_Fire_K2Node_InputAxisEvent_0(AxisValue: number) : void;
            /*
             *Event when this actor overlaps another actor, for example a player walking into a trigger.
             *For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.
             *@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.
             */
            ReceiveActorBeginOverlap(OtherActor: $Nullable<UE.Actor>) : void;
            /*
             *Event when play begins for this actor.
             */
            ReceiveBeginPlay() : void;
            static StaticClass(): Class;
            static Find(OrigInName: string, Outer?: Object): ThirdPersonCharacter_C;
            static Load(InName: string): ThirdPersonCharacter_C;
        
            __tid_ThirdPersonCharacter_C_0__: boolean;
        }
        
    }

// __TYPE_DECL_END
// __TYPE_DECL_START: ABDA2018447AFC75C86BE09125399972
    namespace Game.Mannequin.Animations.ThirdPerson_AnimBP {
        class ThirdPerson_AnimBP_C extends UE.AnimInstance {
            constructor(Outer?: Object, Name?: string, ObjectFlags?: number);
            UberGraphFrame: UE.PointerToUberGraphFrame;
            AnimGraphNode_Root: UE.AnimNode_Root;
            AnimGraphNode_TransitionResult_3: UE.AnimNode_TransitionResult;
            AnimGraphNode_TransitionResult_2: UE.AnimNode_TransitionResult;
            AnimGraphNode_TransitionResult_1: UE.AnimNode_TransitionResult;
            AnimGraphNode_TransitionResult: UE.AnimNode_TransitionResult;
            AnimGraphNode_SequencePlayer_2: UE.AnimNode_SequencePlayer;
            AnimGraphNode_StateResult_3: UE.AnimNode_StateResult;
            AnimGraphNode_SequencePlayer_1: UE.AnimNode_SequencePlayer;
            AnimGraphNode_StateResult_2: UE.AnimNode_StateResult;
            AnimGraphNode_SequencePlayer: UE.AnimNode_SequencePlayer;
            AnimGraphNode_StateResult_1: UE.AnimNode_StateResult;
            AnimGraphNode_BlendSpacePlayer: UE.AnimNode_BlendSpacePlayer;
            AnimGraphNode_StateResult: UE.AnimNode_StateResult;
            AnimGraphNode_StateMachine: UE.AnimNode_StateMachine;
            ["IsInAir?"]: boolean;
            Speed: number;
            AnimGraph(AnimGraph: $Ref<UE.PoseLink>) : void;
            /*
             *Executed when the Animation is updated
             */
            BlueprintUpdateAnimation(DeltaTimeX: number) : void;
            EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_175FFF54400CA0EC412B7083B0989D7E() : void;
            EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF() : void;
            ExecuteUbergraph_ThirdPerson_AnimBP(EntryPoint: number) : void;
            static StaticClass(): Class;
            static Find(OrigInName: string, Outer?: Object): ThirdPerson_AnimBP_C;
            static Load(InName: string): ThirdPerson_AnimBP_C;
        
            __tid_ThirdPerson_AnimBP_C_0__: boolean;
        }
        
    }

// __TYPE_DECL_END
// __TYPE_DECL_START: 819FE165412B370746C9159B51857ADC
    namespace Game.StarterContent.Blueprints.Blueprint_CeilingLight {
        class Blueprint_CeilingLight_C extends UE.Actor {
            constructor(Outer?: Object, Name?: string, ObjectFlags?: number);
            SM_Lamp_Ceiling: UE.StaticMeshComponent;
            PointLight1: UE.PointLightComponent;
            Scene1: UE.SceneComponent;
            Brightness: number;
            Color: UE.LinearColor;
            ["Source Radius"]: number;
            /*
             *Construction script, the place to spawn components and do other setup.
             *@note Name used in CreateBlueprint function
             */
            UserConstructionScript() : void;
            static StaticClass(): Class;
            static Find(OrigInName: string, Outer?: Object): Blueprint_CeilingLight_C;
            static Load(InName: string): Blueprint_CeilingLight_C;
        
            __tid_Blueprint_CeilingLight_C_0__: boolean;
        }
        
    }

// __TYPE_DECL_END
// __TYPE_DECL_START: 862A26E84A42F13FB193AC87521ABCE8
    namespace Game.StarterContent.Blueprints.Blueprint_Effect_Explosion {
        class Blueprint_Effect_Explosion_C extends UE.Actor {
            constructor(Outer?: Object, Name?: string, ObjectFlags?: number);
            ["Explosion Audio"]: UE.AudioComponent;
            P_Explosion: UE.ParticleSystemComponent;
            static StaticClass(): Class;
            static Find(OrigInName: string, Outer?: Object): Blueprint_Effect_Explosion_C;
            static Load(InName: string): Blueprint_Effect_Explosion_C;
        
            __tid_Blueprint_Effect_Explosion_C_0__: boolean;
        }
        
    }

// __TYPE_DECL_END
// __TYPE_DECL_START: A0AD22D447F99B83A9A31C9B9426B5C0
    namespace Game.StarterContent.Blueprints.Blueprint_Effect_Fire {
        class Blueprint_Effect_Fire_C extends UE.Actor {
            constructor(Outer?: Object, Name?: string, ObjectFlags?: number);
            ["Fire Audio"]: UE.AudioComponent;
            P_Fire: UE.ParticleSystemComponent;
            static StaticClass(): Class;
            static Find(OrigInName: string, Outer?: Object): Blueprint_Effect_Fire_C;
            static Load(InName: string): Blueprint_Effect_Fire_C;
        
            __tid_Blueprint_Effect_Fire_C_0__: boolean;
        }
        
    }

// __TYPE_DECL_END
// __TYPE_DECL_START: 2678356F40E4E16306BDD687933AE2D1
    namespace Game.StarterContent.Blueprints.Blueprint_Effect_Smoke {
        class Blueprint_Effect_Smoke_C extends UE.Actor {
            constructor(Outer?: Object, Name?: string, ObjectFlags?: number);
            ["Smoke Audio"]: UE.AudioComponent;
            P_Smoke: UE.ParticleSystemComponent;
            static StaticClass(): Class;
            static Find(OrigInName: string, Outer?: Object): Blueprint_Effect_Smoke_C;
            static Load(InName: string): Blueprint_Effect_Smoke_C;
        
            __tid_Blueprint_Effect_Smoke_C_0__: boolean;
        }
        
    }

// __TYPE_DECL_END
// __TYPE_DECL_START: 0D94FA604928B24E62003083BA722E3C
    namespace Game.StarterContent.Blueprints.Blueprint_Effect_Sparks {
        class Blueprint_Effect_Sparks_C extends UE.Actor {
            constructor(Outer?: Object, Name?: string, ObjectFlags?: number);
            ["Sparks Audio"]: UE.AudioComponent;
            Sparks: UE.ParticleSystemComponent;
            static StaticClass(): Class;
            static Find(OrigInName: string, Outer?: Object): Blueprint_Effect_Sparks_C;
            static Load(InName: string): Blueprint_Effect_Sparks_C;
        
            __tid_Blueprint_Effect_Sparks_C_0__: boolean;
        }
        
    }

// __TYPE_DECL_END
// __TYPE_DECL_START: 62110038444C84D1EC760AB254B78A07
    namespace Game.StarterContent.Blueprints.Blueprint_Effect_Steam {
        class Blueprint_Effect_Steam_C extends UE.Actor {
            constructor(Outer?: Object, Name?: string, ObjectFlags?: number);
            ["Steam AUdio"]: UE.AudioComponent;
            P_Steam_Lit: UE.ParticleSystemComponent;
            static StaticClass(): Class;
            static Find(OrigInName: string, Outer?: Object): Blueprint_Effect_Steam_C;
            static Load(InName: string): Blueprint_Effect_Steam_C;
        
            __tid_Blueprint_Effect_Steam_C_0__: boolean;
        }
        
    }

// __TYPE_DECL_END
// __TYPE_DECL_START: 6A1AE04E46BB2DCE8E8DA5B318ECB60F
    namespace Game.StarterContent.Blueprints.Blueprint_WallSconce {
        class Blueprint_WallSconce_C extends UE.Actor {
            constructor(Outer?: Object, Name?: string, ObjectFlags?: number);
            SM_Lamp_Wall: UE.StaticMeshComponent;
            PointLight2: UE.SpotLightComponent;
            Scene1: UE.SceneComponent;
            Brightness: number;
            Color: UE.LinearColor;
            ["Inner Cone Angle"]: number;
            ["Outer Cone Angle"]: number;
            /*
             *Construction script, the place to spawn components and do other setup.
             *@note Name used in CreateBlueprint function
             */
            UserConstructionScript() : void;
            static StaticClass(): Class;
            static Find(OrigInName: string, Outer?: Object): Blueprint_WallSconce_C;
            static Load(InName: string): Blueprint_WallSconce_C;
        
            __tid_Blueprint_WallSconce_C_0__: boolean;
        }
        
    }

// __TYPE_DECL_END
// __TYPE_DECL_START: 7D9D2A7B4442E0C5EAEE93B5D7371C74
    namespace Game.StarterContent.Blueprints.BP_LightStudio {
        class BP_LightStudio_C extends UE.Actor {
            constructor(Outer?: Object, Name?: string, ObjectFlags?: number);
            SkyLight1: UE.SkyLightComponent;
            ExponentialHeightFog1: UE.ExponentialHeightFogComponent;
            PrevisArrow: UE.StaticMeshComponent;
            Skybox: UE.StaticMeshComponent;
            Scene1: UE.SceneComponent;
            GlobalBrightness: number;
            Use_HDRI: boolean;
            UseSunLight: boolean;
            SunBrightness: number;
            SunTint: UE.LinearColor;
            StationaryLightForSun: boolean;
            SunDirectionalLight: UE.DirectionalLightComponent;
            UseAtmosphere: boolean;
            AtmosphereBrightness: number;
            AtmosphereTint: UE.LinearColor;
            PrevisArrowMaterial: UE.MaterialInstanceDynamic;
            LightColor: UE.LinearColor;
            SunColorCurve: UE.CurveLinearColor;
            OverrideSunColor: boolean;
            AtmosphereDensityMultiplier: number;
            AtmosphereAltitude: number;
            DisableSunDisk: boolean;
            UseFog: boolean;
            FogBrightness: number;
            FogTint: UE.LinearColor;
            FogAltitude: number;
            FogMaxOpacity: number;
            FogHeightFalloff: number;
            FogDensity: number;
            FogBrightnessCurve: UE.CurveFloat;
            FogStartDistance: number;
            DisableGroundScattering: boolean;
            AtmosphereDistanceScale: number;
            SkyboxMaterial: UE.MaterialInstanceDynamic;
            HDRI_Brightness: number;
            HDRI_Contrast: number;
            HDRI_Tint: UE.LinearColor;
            HDRI_Cubemap: UE.Texture;
            HDRI_Rotation: number;
            AtmosphereOpacityHorizon: number;
            AtmosphereOpacityZenith: number;
            HighDensityAtmosphere: boolean;
            AtmosphericFog: UE.AtmosphericFogComponent;
            UseSkylight: boolean;
            Shadowdistance: number;
            LightShaftBloom: boolean;
            LightShaftOcclusion: boolean;
            OcclusionMaskDarkness: number;
            BloomScale: number;
            BloomThreshold: number;
            BloomTint: UE.Color;
            AtmosphereFogMultiplier: number;
            AtmosphereDensityHeight: number;
            AtmosphereMaxScatteringOrder: number;
            AtmosphereAltitudeSampleNumber: number;
            LightFunctionMaterial: UE.MaterialInterface;
            MIC_Black: UE.MaterialInstance;
            MIC_HDRI: UE.MaterialInstance;
            AtmosphereDensity() : void;
            CalculateSunColor() : void;
            NormalizedSunAngle(Angle: $Ref<number>) : void;
            SunMobility() : void;
            /*
             *Construction script, the place to spawn components and do other setup.
             *@note Name used in CreateBlueprint function
             */
            UserConstructionScript() : void;
            static StaticClass(): Class;
            static Find(OrigInName: string, Outer?: Object): BP_LightStudio_C;
            static Load(InName: string): BP_LightStudio_C;
        
            __tid_BP_LightStudio_C_0__: boolean;
        }
        
    }

// __TYPE_DECL_END
// __TYPE_DECL_START: 1942B77C416AAE8EF93E8ABE1FF681B5
    namespace Game.Blueprints.TypeScript.TS_Bullet {
        class TS_Bullet_C extends UE.Actor {
            constructor(Outer?: Object, Name?: string, ObjectFlags?: number);
            UberGraphFrame: UE.PointerToUberGraphFrame;
            StaticMesh: UE.StaticMeshComponent;
            DefaultSceneRoot: UE.SceneComponent;
            bulletSpeed: UE.Vector;
            ExecuteUbergraph_TS_Bullet(EntryPoint: number) : void;
            /*
             *Event when play begins for this actor.
             */
            ReceiveBeginPlay() : void;
            /*
             *Event called every frame, if ticking is enabled
             */
            ReceiveTick(DeltaSeconds: number) : void;
            static StaticClass(): Class;
            static Find(OrigInName: string, Outer?: Object): TS_Bullet_C;
            static Load(InName: string): TS_Bullet_C;
        
            __tid_TS_Bullet_C_0__: boolean;
        }
        
    }

// __TYPE_DECL_END
// __TYPE_DECL_START: C5613FF6406B4DE12ACF6DA7304C6F18
    namespace Game.Blueprints.TypeScript.TS_Enemy {
        class TS_Enemy_C extends UE.Game.ThirdPersonCPP.Blueprints.EnermyPrefab.EnermyPrefab_C {
            constructor(Outer?: Object, Name?: string, ObjectFlags?: number);
            DefaultSceneRoot_ERROR_DUPLICATE_0: UE.SceneComponent;
            static StaticClass(): Class;
            static Find(OrigInName: string, Outer?: Object): TS_Enemy_C;
            static Load(InName: string): TS_Enemy_C;
        
            __tid_TS_Enemy_C_0__: boolean;
        }
        
    }

// __TYPE_DECL_END
// __TYPE_DECL_START: 321FBF53489FA80AAF898C934AF0FE0B
    namespace Game.Blueprints.TypeScript.TS_Player {
        class TS_Player_C extends UE.unreal_puertsCharacter {
            constructor(Outer?: Object, Name?: string, ObjectFlags?: number);
            UberGraphFrame: UE.PointerToUberGraphFrame;
            barrageRow: number;
            barrageCol: number;
            angleRowOffset: number;
            angleColOffset: number;
            health: number;
            world: UE.World;
            ExecuteUbergraph_TS_Player(EntryPoint: number) : void;
            InpAxisEvt_Fire_K2Node_InputAxisEvent_0(AxisValue: number) : void;
            /*
             *Event when this actor overlaps another actor, for example a player walking into a trigger.
             *For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.
             *@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.
             */
            ReceiveActorBeginOverlap(OtherActor: $Nullable<UE.Actor>) : void;
            /*
             *Event when play begins for this actor.
             */
            ReceiveBeginPlay() : void;
            static StaticClass(): Class;
            static Find(OrigInName: string, Outer?: Object): TS_Player_C;
            static Load(InName: string): TS_Player_C;
        
            __tid_TS_Player_C_0__: boolean;
        }
        
    }

// __TYPE_DECL_END
// __TYPE_DECL_START: A033946E4B15153F0F1A87A15F52394E
    namespace Game.ThirdPersonCPP.Blueprints.BulletPrefab {
        class BulletPrefab_C extends UE.Actor {
            constructor(Outer?: Object, Name?: string, ObjectFlags?: number);
            UberGraphFrame: UE.PointerToUberGraphFrame;
            StaticMesh: UE.StaticMeshComponent;
            DefaultSceneRoot: UE.SceneComponent;
            Speed: UE.Vector;
            isDead: boolean;
            ExecuteUbergraph_BulletPrefab(EntryPoint: number) : void;
            Move(Speed: boolean) : void;
            /*
             *Event when this actor overlaps another actor, for example a player walking into a trigger.
             *For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.
             *@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.
             */
            ReceiveActorBeginOverlap(OtherActor: $Nullable<UE.Actor>) : void;
            /*
             *Event when play begins for this actor.
             */
            ReceiveBeginPlay() : void;
            /*
             *Event called every frame, if ticking is enabled
             */
            ReceiveTick(DeltaSeconds: number) : void;
            static StaticClass(): Class;
            static Find(OrigInName: string, Outer?: Object): BulletPrefab_C;
            static Load(InName: string): BulletPrefab_C;
        
            __tid_BulletPrefab_C_0__: boolean;
        }
        
    }

// __TYPE_DECL_END
// __TYPE_DECL_START: 79F22F364A253B2A83CEB89E49D75BE3
    namespace Game.ThirdPersonCPP.Blueprints.EnermyPrefab {
        class EnermyPrefab_C extends UE.Actor {
            constructor(Outer?: Object, Name?: string, ObjectFlags?: number);
            UberGraphFrame: UE.PointerToUberGraphFrame;
            StaticMesh: UE.StaticMeshComponent;
            Arrow: UE.ArrowComponent;
            Capsule: UE.CapsuleComponent;
            DefaultSceneRoot: UE.SceneComponent;
            EnermyAttackSpeed: number;
            isDead: boolean;
            Enermy_Boom() : void;
            ExecuteUbergraph_EnermyPrefab(EntryPoint: number) : void;
            ["Get New Enemy Location"](playerRef: $Nullable<UE.Actor>, SpawnLoc: $Ref<UE.Vector>) : void;
            /*
             *Event when this actor overlaps another actor, for example a player walking into a trigger.
             *For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.
             *@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.
             */
            ReceiveActorBeginOverlap(OtherActor: $Nullable<UE.Actor>) : void;
            /*
             *Event called every frame, if ticking is enabled
             */
            ReceiveTick(DeltaSeconds: number) : void;
            static StaticClass(): Class;
            static Find(OrigInName: string, Outer?: Object): EnermyPrefab_C;
            static Load(InName: string): EnermyPrefab_C;
        
            __tid_EnermyPrefab_C_0__: boolean;
        }
        
    }

// __TYPE_DECL_END
// __TYPE_DECL_START: 4495583B41F20F8AEACF43BB796D1FEE
    namespace Game.ThirdPersonCPP.Blueprints.EnemySpawner {
        class EnemySpawner_C extends UE.Actor {
            constructor(Outer?: Object, Name?: string, ObjectFlags?: number);
            UberGraphFrame: UE.PointerToUberGraphFrame;
            DefaultSceneRoot: UE.SceneComponent;
            SpawnNum: number;
            SpawnCnt: number;
            SpawnInterval: number;
            SpawnTimer: number;
            ExecuteUbergraph_EnemySpawner(EntryPoint: number) : void;
            ReceiveActorBeginOverlap(OtherActor: $Nullable<UE.Actor>) : void;
            /*
             *Event called every frame, if ticking is enabled
             */
            ReceiveTick(DeltaSeconds: number) : void;
            static StaticClass(): Class;
            static Find(OrigInName: string, Outer?: Object): EnemySpawner_C;
            static Load(InName: string): EnemySpawner_C;
        
            __tid_EnemySpawner_C_0__: boolean;
        }
        
    }

// __TYPE_DECL_END
// __TYPE_DECL_START: 78DFAD054A53CD2A45321BAB84435C4E
    namespace Game.Blueprints.TypeScript.TS_LevelMap {
        class TS_LevelMap_C extends UE.MySpawner {
            constructor(Outer?: Object, Name?: string, ObjectFlags?: number);
            DefaultSceneRoot: UE.SceneComponent;
            static StaticClass(): Class;
            static Find(OrigInName: string, Outer?: Object): TS_LevelMap_C;
            static Load(InName: string): TS_LevelMap_C;
        
            __tid_TS_LevelMap_C_0__: boolean;
        }
        
    }

// __TYPE_DECL_END
}
