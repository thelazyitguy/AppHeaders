//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/CMRCoreViewModel.h>

@interface CMRSmartHomePartnerViewModel : CMRCoreViewModel
{
    struct Handle<std::__1::shared_ptr<core::SmartHomePartnerViewModel>, std::__1::shared_ptr<core::SmartHomePartnerViewModel>> _cppRefHandle;
}

+ (id)getTypeName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)saveState;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)getType;
- (void)checkAlexaAccountLinkingStatus:(id)arg1 authCode:(id)arg2 state:(id)arg3;
- (void)errorDialogCancelled;
- (void)errorDialogPositiveButtonPressed;
- (void)primaryButtonPressed;
- (void)moreInfoPressed;
- (void)setupHelpPressed;
- (id)currentState;
- (void)load:(id)arg1;
- (const shared_ptr_845a8881 *)cppRef;
- (id)initWithCpp:(const shared_ptr_845a8881 *)arg1;

@end

