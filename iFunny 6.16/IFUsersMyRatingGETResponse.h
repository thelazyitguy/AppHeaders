//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFNetworkResponseMappable-Protocol.h>

@class FNROUserRatingLevel, NSString;

@interface IFUsersMyRatingGETResponse : NSObject <IFNetworkResponseMappable>
{
    NSString *_id;
    FNROUserRatingLevel *_ratingLevel;
}

+ (id)objectMapping;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FNROUserRatingLevel *ratingLevel; // @synthesize ratingLevel=_ratingLevel;
@property(readonly, copy, nonatomic) NSString *id; // @synthesize id=_id;

@end
