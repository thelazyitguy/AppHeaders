//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNPickerViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNValuePickerDataSource-Protocol.h>

__attribute__((visibility("hidden")))
@interface _TtC9T1Twitter30SettingsChangeCountryPresenter : NSObject <TFNValuePickerDataSource, TFNPickerViewControllerDelegate>
{
    // Error parsing type: , name: value
    // Error parsing type: , name: availableValues
    // Error parsing type: , name: account
    // Error parsing type: , name: settingsOnboardingFlowPresenter
    // Error parsing type: , name: formatter
}

- (void).cxx_destruct;
- (id)init;
- (void)pickerViewController:(id)arg1 didDeselectValue:(id)arg2 inSectionAtIndex:(unsigned long long)arg3 willConfirm:(_Bool)arg4 willDismiss:(_Bool)arg5;
- (void)pickerViewController:(id)arg1 didPickValue:(id)arg2 inSectionAtIndex:(unsigned long long)arg3 willConfirm:(_Bool)arg4 willDismiss:(_Bool)arg5;
- (id)initiallyPickedValueForPicker:(id)arg1;
- (id)valuesForPicker:(id)arg1;
- (void)presentWithPresentingController:(id)arg1;

@end
