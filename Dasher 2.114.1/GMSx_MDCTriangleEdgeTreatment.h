//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_MDCEdgeTreatment.h>

@interface GMSx_MDCTriangleEdgeTreatment : GMSx_MDCEdgeTreatment
{
    double _size;
    unsigned long long _style;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) double size; // @synthesize size=_size;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)pathGeneratorForEdgeWithLength:(double)arg1;
- (id)initWithSize:(double)arg1 style:(unsigned long long)arg2;

@end
