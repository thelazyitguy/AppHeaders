//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MDXLocationInfo : NSObject
{
    int _latitudeE7;
    int _longitudeE7;
}

+ (id)MDXLocationInfoWithLatitudeE7:(int)arg1 longitudeE7:(int)arg2;
@property(nonatomic) int longitudeE7; // @synthesize longitudeE7=_longitudeE7;
@property(nonatomic) int latitudeE7; // @synthesize latitudeE7=_latitudeE7;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
