//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/CMRCoreViewModel.h>

@interface CMRSelectAutomationConnectionViewModel : CMRCoreViewModel
{
    struct Handle<std::__1::shared_ptr<core::SelectAutomationConnectionViewModel>, std::__1::shared_ptr<core::SelectAutomationConnectionViewModel>> _cppRefHandle;
}

+ (id)getTypeName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)saveState;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)getType;
- (void)errorDialogCancelled;
- (void)errorDialogPositiveButtonPressed;
- (void)setupSuccessScheduleJobPressed;
- (void)setupSuccessDismissed;
- (void)automationSetupCompleted;
- (void)alertDialogCancelled;
- (void)alertDialogNegativeButtonPressed;
- (void)alertDialogPositiveButtonPressed;
- (void)moreOptionsPressed;
- (void)connectionItemPressed:(int)arg1 listIndex:(int)arg2;
- (id)currentState;
- (void)load:(id)arg1;
- (const shared_ptr_e1dd4f8f *)cppRef;
- (id)initWithCpp:(const shared_ptr_e1dd4f8f *)arg1;

@end
