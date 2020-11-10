//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTShortsProjectState-Protocol.h"
#import "YTShortsProjectStateUpdateObserver-Protocol.h"

@class GIMMe, NSDate, NSString, NSURL, YTShortsCameraProjectState, YTShortsProjectStateArchive;
@protocol YTShortsProjectStateUpdateObserver;

@interface YTShortsProjectState : NSObject <YTShortsProjectState, YTShortsProjectStateUpdateObserver>
{
    id <YTShortsProjectStateUpdateObserver> _updateObserver;
    GIMMe *_gimme;
    YTShortsProjectStateArchive *_archive;
    YTShortsCameraProjectState *_cameraProjectState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTShortsCameraProjectState *cameraProjectState; // @synthesize cameraProjectState=_cameraProjectState;
@property(readonly, copy, nonatomic) YTShortsProjectStateArchive *archive; // @synthesize archive=_archive;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTShortsProjectStateUpdateObserver> updateObserver; // @synthesize updateObserver=_updateObserver;
- (id)generateDirectoryForProjectIdentifier:(id)arg1;
- (void)didBecomeCurrentProject;
- (void)willResignCurrentState;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSURL *projectDirectory;
@property(readonly, nonatomic) NSString *projectID;
- (void)projectStateDidUpdate:(id)arg1;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isLoaded; // @dynamic isLoaded;
- (id)initWithProjectStateArchive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

