//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFNetworkResponseMappable-Protocol.h>
#import <Funny/NSCoding-Protocol.h>

@class FNROUserRatingLevel, NSNumber;

@interface FNROUserRating : NSObject <IFNetworkResponseMappable, NSCoding>
{
    NSNumber *_points;
    FNROUserRatingLevel *_current_level;
    FNROUserRatingLevel *_next_level;
    FNROUserRatingLevel *_max_level;
    NSNumber *_is_show_level;
}

+ (id)objectMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *is_show_level; // @synthesize is_show_level=_is_show_level;
@property(retain, nonatomic) FNROUserRatingLevel *max_level; // @synthesize max_level=_max_level;
@property(retain, nonatomic) FNROUserRatingLevel *next_level; // @synthesize next_level=_next_level;
@property(retain, nonatomic) FNROUserRatingLevel *current_level; // @synthesize current_level=_current_level;
@property(retain, nonatomic) NSNumber *points; // @synthesize points=_points;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
