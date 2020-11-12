//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

#import "DYNContentViewObject-Protocol.h"

@class NSString;
@protocol DYNContentViewObjectActionDelegate, GILVisualElementParams;

@interface DYNHubSearchEmptyResultsContentViewObject : GOOBaseContentViewObject <DYNContentViewObject>
{
    NSString *_searchQuery;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)shouldShowInkView;
@property(retain, nonatomic) Class contentViewClass;

// Remaining properties
@property(nonatomic) __weak id <DYNContentViewObjectActionDelegate> actionDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) int visualElementID;
@property(retain, nonatomic) id <GILVisualElementParams> visualElementParams;

@end
