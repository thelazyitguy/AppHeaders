//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC8LastPass8LPConfig : NSObject
{
    // Error parsing type: , name: configName
    // Error parsing type: , name: reportDogfoodAtLogin
    // Error parsing type: , name: keychainGroupId
    // Error parsing type: , name: appGroupId
    // Error parsing type: , name: watchGroupId
    // Error parsing type: , name: appType
}

+ (id)shared;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSString *appType;
@property(nonatomic, copy) NSString *watchGroupId;
@property(nonatomic, copy) NSString *appGroupId;
@property(nonatomic, copy) NSString *keychainGroupId;
@property(nonatomic) _Bool reportDogfoodAtLogin; // @synthesize reportDogfoodAtLogin;
@property(nonatomic, copy) NSString *configName;

@end
