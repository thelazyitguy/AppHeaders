//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUIDisplayPageSimilarsCellListViewModelProtocol-Protocol.h"

@class NSArray, NSNumber, PlaybackSourceModel;

@interface DisplayPageSimilarsListViewModel : NSObject <NFUIDisplayPageSimilarsCellListViewModelProtocol>
{
    NSArray *_items;
    unsigned long long _index;
    PlaybackSourceModel *_sourceModel;
    NSNumber *_currentPresentationSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *currentPresentationSession; // @synthesize currentPresentationSession=_currentPresentationSession;
@property(retain, nonatomic) PlaybackSourceModel *sourceModel; // @synthesize sourceModel=_sourceModel;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
- (void)endPresentationSession;
- (void)beginPresentationSession;
@property(readonly, nonatomic) unsigned long long numberOfItems;
- (unsigned long long)indexOfItem:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;

@end

