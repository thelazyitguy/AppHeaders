//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@class NSURL;
@protocol SPTCollectionPlatform, SPTCollectionPlatformLogger, SPTCollectionPlatformTestManager;

@interface SPTCollectionPlatformAddRemoveFromCollectionAction : SPAction
{
    _Bool _wasInCollection;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTCollectionPlatformLogger> _collectionLogger;
    NSURL *_link;
    NSURL *_sourceURL;
    NSURL *_contextURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *contextURL; // @synthesize contextURL=_contextURL;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) NSURL *link; // @synthesize link=_link;
@property(readonly, nonatomic) _Bool wasInCollection; // @synthesize wasInCollection=_wasInCollection;
@property(retain, nonatomic) id <SPTCollectionPlatformLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
- (id)accessibilityHint;
- (id)iconColor;
- (long long)icon;
- (id)execute:(id)arg1;
- (unsigned long long)userIntent;
- (long long)style;
- (id)logEventName;
- (id)title;
- (id)initWithLink:(id)arg1 collectionPlatform:(id)arg2 collectionTestManager:(id)arg3 collectionLogger:(id)arg4 wasInCollection:(_Bool)arg5 logContext:(id)arg6 sourceURL:(id)arg7 contextURL:(id)arg8;

@end

