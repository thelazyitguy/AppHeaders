//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, RedditorRank;

@interface AwardRankings : NSObject
{
    RedditorRank *_currentRank;
    NSArray *_topAwardersRank;
    long long _topAwardedType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long topAwardedType; // @synthesize topAwardedType=_topAwardedType;
@property(readonly, nonatomic) NSArray *topAwardersRank; // @synthesize topAwardersRank=_topAwardersRank;
@property(readonly, nonatomic) RedditorRank *currentRank; // @synthesize currentRank=_currentRank;
- (id)initWithData:(id)arg1;

@end

