//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/DSCFeedOperation.h>

@class DSCSharedCardData, NSArray;

@interface DSCFeedUpdateOperation : DSCFeedOperation
{
    NSArray *_cards;
    DSCSharedCardData *_sharedCardData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) DSCSharedCardData *sharedCardData; // @synthesize sharedCardData=_sharedCardData;
@property(readonly, nonatomic) NSArray *cards; // @synthesize cards=_cards;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithUndoable:(_Bool)arg1 cards:(id)arg2 sharedCardData:(id)arg3;

@end
