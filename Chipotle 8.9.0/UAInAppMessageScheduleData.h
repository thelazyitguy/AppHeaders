//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UAInAppMessage;
@protocol UAInAppMessageAdapterProtocol, UAInAppMessageDisplayCoordinator;

@interface UAInAppMessageScheduleData : NSObject
{
    id <UAInAppMessageAdapterProtocol> _adapter;
    NSString *_scheduleID;
    NSDictionary *_metadata;
    UAInAppMessage *_message;
    id <UAInAppMessageDisplayCoordinator> _displayCoordinator;
}

+ (id)dataWithAdapter:(id)arg1 scheduleID:(id)arg2 metadata:(id)arg3 message:(id)arg4 displayCoordinator:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) id <UAInAppMessageDisplayCoordinator> displayCoordinator; // @synthesize displayCoordinator=_displayCoordinator;
@property(retain, nonatomic) UAInAppMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *scheduleID; // @synthesize scheduleID=_scheduleID;
@property(retain, nonatomic) id <UAInAppMessageAdapterProtocol> adapter; // @synthesize adapter=_adapter;
- (id)initWithAdapter:(id)arg1 scheduleID:(id)arg2 metadata:(id)arg3 message:(id)arg4 displayCoordinator:(id)arg5;

@end
