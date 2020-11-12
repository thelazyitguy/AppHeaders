//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GBTNotification : NSObject
{
    NSString *_email;
    NSString *_serializedId;
    NSString *_actionIdentifier;
    long long _applicationState;
}

- (void).cxx_destruct;
@property(nonatomic) long long applicationState; // @synthesize applicationState=_applicationState;
@property(copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(copy, nonatomic) NSString *serializedId; // @synthesize serializedId=_serializedId;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic, getter=isActionable) _Bool actionable;
@property(readonly, nonatomic, getter=isOpenable) _Bool openable;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)spanWithMetrics:(id)arg1;

@end
