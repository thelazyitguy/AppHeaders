//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_MDCCornerTreatment.h"

@interface GMSx_MDCCutCornerTreatment : GMSx_MDCCornerTreatment
{
    double _cut;
}

@property(nonatomic) double cut; // @synthesize cut=_cut;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)pathGeneratorForCornerWithAngle:(double)arg1 andCut:(double)arg2;
- (id)pathGeneratorForCornerWithAngle:(double)arg1 forViewSize:(struct CGSize)arg2;
- (id)pathGeneratorForCornerWithAngle:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCut:(double)arg1;
- (id)init;

@end

