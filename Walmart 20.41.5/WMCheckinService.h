//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IOSShared/SDWebService.h>

@interface WMCheckinService : SDWebService
{
}

+ (id)p_checkinSharedBundle;
+ (Class)errorClass;
+ (id)sharedInstance;
- (id)updateStatus:(unsigned long long)arg1 storeNumber:(id)arg2 location:(id)arg3 checkinType:(id)arg4 uiUpdateBlock:(CDUnknownBlockType)arg5;
- (id)updateStatus:(unsigned long long)arg1 storeNumber:(id)arg2 checkinType:(id)arg3 uiUpdateBlock:(CDUnknownBlockType)arg4;
- (id)allOpenOrdersWithUiUpdateBlock:(CDUnknownBlockType)arg1;
- (id)openOrdersWithUiUpdateBlock:(CDUnknownBlockType)arg1;
- (id)dataWithJSONObject:(id)arg1;
- (id)baseSchemeInServiceSpecification;
- (id)init;

@end
