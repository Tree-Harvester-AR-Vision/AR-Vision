//------------------------------------------------------------------------------
// <auto-generated>
//     This code was auto-generated by com.unity.inputsystem:InputActionCodeGenerator
//     version 1.5.1
//     from Assets/Scripts/Controlls.inputactions
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Utilities;

public partial class @Controlls: IInputActionCollection2, IDisposable
{
    public InputActionAsset asset { get; }
    public @Controlls()
    {
        asset = InputActionAsset.FromJson(@"{
    ""name"": ""Controlls"",
    ""maps"": [
        {
            ""name"": ""Default"",
            ""id"": ""2a89295c-9056-40fe-9dca-6133d4d70847"",
            ""actions"": [
                {
                    ""name"": ""HideGUI"",
                    ""type"": ""Button"",
                    ""id"": ""61af1495-ab43-43ed-9151-6938091ee903"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """",
                    ""initialStateCheck"": false
                },
                {
                    ""name"": ""MarkWall"",
                    ""type"": ""Button"",
                    ""id"": ""cce38806-adf8-4e09-ae2f-01863096c1fe"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """",
                    ""initialStateCheck"": false
                },
                {
                    ""name"": ""ApplyWall"",
                    ""type"": ""Button"",
                    ""id"": ""03ebe26d-3974-41cd-be9d-2a09af7ed910"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """",
                    ""initialStateCheck"": false
                }
            ],
            ""bindings"": [
                {
                    ""name"": """",
                    ""id"": ""04262671-4c70-4cac-993f-4fc8558eafd2"",
                    ""path"": ""<OculusTouchController>/primaryButton"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""HideGUI"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""a8c36ff8-31fa-4eed-a1d9-d21344fa1aa3"",
                    ""path"": ""<Keyboard>/q"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""HideGUI"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""53ef69e4-ec69-427c-8183-e76a8193bbf8"",
                    ""path"": ""<OculusTouchController>{LeftHand}/triggerPressed"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""MarkWall"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""919d6208-f912-4c36-a695-595ca85c4ae6"",
                    ""path"": ""<OculusTouchController>{LeftHand}/gripPressed"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""ApplyWall"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                }
            ]
        }
    ],
    ""controlSchemes"": [
        {
            ""name"": ""Default"",
            ""bindingGroup"": ""Default"",
            ""devices"": [
                {
                    ""devicePath"": ""<OculusTouchController>"",
                    ""isOptional"": false,
                    ""isOR"": false
                }
            ]
        }
    ]
}");
        // Default
        m_Default = asset.FindActionMap("Default", throwIfNotFound: true);
        m_Default_HideGUI = m_Default.FindAction("HideGUI", throwIfNotFound: true);
        m_Default_MarkWall = m_Default.FindAction("MarkWall", throwIfNotFound: true);
        m_Default_ApplyWall = m_Default.FindAction("ApplyWall", throwIfNotFound: true);
    }

    public void Dispose()
    {
        UnityEngine.Object.Destroy(asset);
    }

    public InputBinding? bindingMask
    {
        get => asset.bindingMask;
        set => asset.bindingMask = value;
    }

    public ReadOnlyArray<InputDevice>? devices
    {
        get => asset.devices;
        set => asset.devices = value;
    }

    public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;

    public bool Contains(InputAction action)
    {
        return asset.Contains(action);
    }

    public IEnumerator<InputAction> GetEnumerator()
    {
        return asset.GetEnumerator();
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return GetEnumerator();
    }

    public void Enable()
    {
        asset.Enable();
    }

    public void Disable()
    {
        asset.Disable();
    }

    public IEnumerable<InputBinding> bindings => asset.bindings;

    public InputAction FindAction(string actionNameOrId, bool throwIfNotFound = false)
    {
        return asset.FindAction(actionNameOrId, throwIfNotFound);
    }

    public int FindBinding(InputBinding bindingMask, out InputAction action)
    {
        return asset.FindBinding(bindingMask, out action);
    }

    // Default
    private readonly InputActionMap m_Default;
    private List<IDefaultActions> m_DefaultActionsCallbackInterfaces = new List<IDefaultActions>();
    private readonly InputAction m_Default_HideGUI;
    private readonly InputAction m_Default_MarkWall;
    private readonly InputAction m_Default_ApplyWall;
    public struct DefaultActions
    {
        private @Controlls m_Wrapper;
        public DefaultActions(@Controlls wrapper) { m_Wrapper = wrapper; }
        public InputAction @HideGUI => m_Wrapper.m_Default_HideGUI;
        public InputAction @MarkWall => m_Wrapper.m_Default_MarkWall;
        public InputAction @ApplyWall => m_Wrapper.m_Default_ApplyWall;
        public InputActionMap Get() { return m_Wrapper.m_Default; }
        public void Enable() { Get().Enable(); }
        public void Disable() { Get().Disable(); }
        public bool enabled => Get().enabled;
        public static implicit operator InputActionMap(DefaultActions set) { return set.Get(); }
        public void AddCallbacks(IDefaultActions instance)
        {
            if (instance == null || m_Wrapper.m_DefaultActionsCallbackInterfaces.Contains(instance)) return;
            m_Wrapper.m_DefaultActionsCallbackInterfaces.Add(instance);
            @HideGUI.started += instance.OnHideGUI;
            @HideGUI.performed += instance.OnHideGUI;
            @HideGUI.canceled += instance.OnHideGUI;
            @MarkWall.started += instance.OnMarkWall;
            @MarkWall.performed += instance.OnMarkWall;
            @MarkWall.canceled += instance.OnMarkWall;
            @ApplyWall.started += instance.OnApplyWall;
            @ApplyWall.performed += instance.OnApplyWall;
            @ApplyWall.canceled += instance.OnApplyWall;
        }

        private void UnregisterCallbacks(IDefaultActions instance)
        {
            @HideGUI.started -= instance.OnHideGUI;
            @HideGUI.performed -= instance.OnHideGUI;
            @HideGUI.canceled -= instance.OnHideGUI;
            @MarkWall.started -= instance.OnMarkWall;
            @MarkWall.performed -= instance.OnMarkWall;
            @MarkWall.canceled -= instance.OnMarkWall;
            @ApplyWall.started -= instance.OnApplyWall;
            @ApplyWall.performed -= instance.OnApplyWall;
            @ApplyWall.canceled -= instance.OnApplyWall;
        }

        public void RemoveCallbacks(IDefaultActions instance)
        {
            if (m_Wrapper.m_DefaultActionsCallbackInterfaces.Remove(instance))
                UnregisterCallbacks(instance);
        }

        public void SetCallbacks(IDefaultActions instance)
        {
            foreach (var item in m_Wrapper.m_DefaultActionsCallbackInterfaces)
                UnregisterCallbacks(item);
            m_Wrapper.m_DefaultActionsCallbackInterfaces.Clear();
            AddCallbacks(instance);
        }
    }
    public DefaultActions @Default => new DefaultActions(this);
    private int m_DefaultSchemeIndex = -1;
    public InputControlScheme DefaultScheme
    {
        get
        {
            if (m_DefaultSchemeIndex == -1) m_DefaultSchemeIndex = asset.FindControlSchemeIndex("Default");
            return asset.controlSchemes[m_DefaultSchemeIndex];
        }
    }
    public interface IDefaultActions
    {
        void OnHideGUI(InputAction.CallbackContext context);
        void OnMarkWall(InputAction.CallbackContext context);
        void OnApplyWall(InputAction.CallbackContext context);
    }
}
