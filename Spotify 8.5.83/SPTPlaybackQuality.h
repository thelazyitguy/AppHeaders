//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SPTPlaybackQuality : NSObject <NSCopying>
{
    unsigned long long _bitrateLevel;
}

@property(readonly, nonatomic) unsigned long long bitrateLevel; // @synthesize bitrateLevel=_bitrateLevel;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)bitrateLevelToString:(unsigned long long)arg1;
- (unsigned long long)stringToBitrateLevel:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
