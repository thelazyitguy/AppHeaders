//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GMSPolyline2D;

@interface GMSSubPolyline2D : NSObject <NSCopying>
{
    GMSPolyline2D *_polyline;
    unsigned long long _start;
    unsigned long long _end;
}

@property(readonly, nonatomic) unsigned long long end; // @synthesize end=_end;
@property(readonly, nonatomic) unsigned long long start; // @synthesize start=_start;
@property(readonly, nonatomic) GMSPolyline2D *polyline; // @synthesize polyline=_polyline;
- (void).cxx_destruct;
- (struct Rectangle2D)bound2D;
- (id)polylineValue;
- (struct GMSPoint2D)pointAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfVertices;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubPolyline:(id)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3;
- (id)initWithPolyline:(id)arg1 start:(unsigned long long)arg2;
- (id)initWithPolyline:(id)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3;

@end
