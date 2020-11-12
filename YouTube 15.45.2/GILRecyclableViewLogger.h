//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GILLoggingStateListener-Protocol.h>

@class NSString;
@protocol GILInteractionService, GILRecyclableViewLoggerDataSource, GILVisibilityService;

@interface GILRecyclableViewLogger : NSObject <GILLoggingStateListener>
{
    id <GILVisibilityService> _visibilityLogger;
    id <GILInteractionService> _interactionLogger;
    id <GILRecyclableViewLoggerDataSource> _dataSource;
    int _nestedCollectionViewCount;
    _Bool _loggingEnabled;
}

- (void).cxx_destruct;
- (_Bool)isAllowedToLogView:(id)arg1;
- (id)clientVisualElementAtIndexPath:(id)arg1;
- (void)enabledStateDidChange:(_Bool)arg1;
- (void)didSelectView:(id)arg1;
- (void)didEndDisplayingView:(id)arg1;
- (void)willDisplayView:(id)arg1;
- (void)updateInstrumentationOfView:(id)arg1 atIndexPath:(id)arg2;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
