//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTSActionHandler-Protocol.h"

@class AMIRedstoneWeblabBridgeService, NSString;

@interface AMIRedstoneWeblabActionHandler : NSObject <MTSActionHandler>
{
    NSString *_actionName;
    AMIRedstoneWeblabBridgeService *_service;
}

@property(retain, nonatomic) AMIRedstoneWeblabBridgeService *service; // @synthesize service=_service;
@property(readonly) NSString *actionName; // @synthesize actionName=_actionName;
- (void).cxx_destruct;
- (void)handle:(id)arg1 handlerResult:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithService:(id)arg1;

@end
