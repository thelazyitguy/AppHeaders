//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString, UANotificationCategory, UIColor;

@interface UALegacyInAppMessage : NSObject
{
    NSString *_identifier;
    NSDate *_expiry;
    NSDictionary *_extra;
    long long _displayType;
    NSString *_alert;
    long long _position;
    double _duration;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    NSString *_buttonGroup;
    NSDictionary *_buttonActions;
    NSDictionary *_onClick;
}

+ (id)messageWithPayload:(id)arg1;
+ (id)message;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *onClick; // @synthesize onClick=_onClick;
@property(copy, nonatomic) NSDictionary *buttonActions; // @synthesize buttonActions=_buttonActions;
@property(copy, nonatomic) NSString *buttonGroup; // @synthesize buttonGroup=_buttonGroup;
@property(retain, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *alert; // @synthesize alert=_alert;
@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(copy, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSDate *expiry; // @synthesize expiry=_expiry;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
@property(readonly, nonatomic) NSArray *notificationActions;
@property(readonly, nonatomic) UANotificationCategory *buttonCategory;
@property(readonly, nonatomic) NSDictionary *payload;
- (_Bool)isEqualToMessage:(id)arg1;
- (id)init;

@end
