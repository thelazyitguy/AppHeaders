//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFNetworkResponseMappable-Protocol.h>

@class FNROUserRatingLevel, NSNumber, NSString;

@interface FNROUserRatingLevelRaise : NSObject <IFNetworkResponseMappable>
{
    NSString *_id;
    NSNumber *_created_at;
    FNROUserRatingLevel *_level;
    NSNumber *_was_shown;
}

+ (id)objectMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *was_shown; // @synthesize was_shown=_was_shown;
@property(retain, nonatomic) FNROUserRatingLevel *level; // @synthesize level=_level;
@property(retain, nonatomic) NSNumber *created_at; // @synthesize created_at=_created_at;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;

@end
