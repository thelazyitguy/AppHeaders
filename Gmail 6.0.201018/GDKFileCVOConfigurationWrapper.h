//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKFileCVOConfiguring-Protocol.h"

@class NSString;
@protocol GDKFileCVOConfiguring;

@interface GDKFileCVOConfigurationWrapper : NSObject <GDKFileCVOConfiguring>
{
    id <GDKFileCVOConfiguring> _wrappedConfiguration;
    CDUnknownBlockType _mutationBlock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType mutationBlock; // @synthesize mutationBlock=_mutationBlock;
@property(readonly, nonatomic) id <GDKFileCVOConfiguring> wrappedConfiguration; // @synthesize wrappedConfiguration=_wrappedConfiguration;
- (void)cleanupViewObjectAfterDisplay:(id)arg1 withFile:(id)arg2;
- (void)prepareViewObjectForDisplay:(id)arg1 withFile:(id)arg2 forSort:(id)arg3;
- (void)updateViewObject:(id)arg1 withFile:(id)arg2 forSort:(id)arg3;
- (id)viewObjectForFile:(id)arg1 forSort:(id)arg2 actionDelegate:(id)arg3 dragSessionManager:(id)arg4;
- (id)initWithWrappedConfiguration:(id)arg1 mutationBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
