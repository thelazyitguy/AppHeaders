//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol AMIWeblabBridgeService;

@interface RDCContextManager : NSObject
{
    NSMutableDictionary *_weblabSnapshotsForContext;
    id <AMIWeblabBridgeService> _weblabBridge;
}

@property(nonatomic) __weak id <AMIWeblabBridgeService> weblabBridge; // @synthesize weblabBridge=_weblabBridge;
@property(retain, nonatomic) NSMutableDictionary *weblabSnapshotsForContext; // @synthesize weblabSnapshotsForContext=_weblabSnapshotsForContext;
- (void).cxx_destruct;
- (id)getSnapshotsForWebLabs:(id)arg1 context:(id)arg2;
- (id)createContextWithMarketplace:(id)arg1 locale:(id)arg2 directedCustomerId:(id)arg3 isInternationalMarketplace:(_Bool)arg4;
- (id)initWithDependencies:(id)arg1;

@end
