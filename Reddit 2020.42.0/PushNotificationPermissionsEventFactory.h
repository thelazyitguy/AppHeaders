//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PushNotificationPermissionsEventFactory : NSObject
{
}

+ (id)nounForNotificationType:(unsigned long long)arg1;
+ (id)actionForPermissionAction:(unsigned long long)arg1;
+ (id)nounForPermissionType:(unsigned long long)arg1;
+ (id)popupStringIdForPrompStyle:(unsigned long long)arg1;
+ (unsigned long long)permissionTypeForPromptStyle:(unsigned long long)arg1;
+ (id)previewNounWithSetting:(long long)arg1;
+ (id)actionWithSetting:(long long)arg1;
+ (unsigned long long)actionWithStatus:(long long)arg1;
+ (id)eventForPermissionType:(unsigned long long)arg1 action:(unsigned long long)arg2 correlationId:(id)arg3;
+ (id)eventForPermissionType:(unsigned long long)arg1 status:(long long)arg2 correlationId:(id)arg3;
+ (id)eventForPermissionsWithPromptStyle:(unsigned long long)arg1 action:(unsigned long long)arg2 correlationId:(id)arg3 buttonTitle:(id)arg4 popupText:(id)arg5;
+ (id)pushNotificationSystemSettingsEventWithAction:(id)arg1 noun:(id)arg2;
+ (id)pushNotificationToggleEventWithSettingType:(unsigned long long)arg1 showPreviewSetting:(long long)arg2;
+ (id)pushNotificationToggleEventWithSettingType:(unsigned long long)arg1 setting:(long long)arg2;
+ (id)pushNotificationToggleEventWithSettingType:(unsigned long long)arg1 status:(long long)arg2;

@end

