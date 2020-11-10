//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class MDCCornerTreatment;

@interface MDCShapeCategory : NSObject <NSCopying>
{
    MDCCornerTreatment *_topLeftCorner;
    MDCCornerTreatment *_topRightCorner;
    MDCCornerTreatment *_bottomLeftCorner;
    MDCCornerTreatment *_bottomRightCorner;
}

- (void).cxx_destruct;
@property(copy, nonatomic) MDCCornerTreatment *bottomRightCorner; // @synthesize bottomRightCorner=_bottomRightCorner;
@property(copy, nonatomic) MDCCornerTreatment *bottomLeftCorner; // @synthesize bottomLeftCorner=_bottomLeftCorner;
@property(copy, nonatomic) MDCCornerTreatment *topRightCorner; // @synthesize topRightCorner=_topRightCorner;
@property(copy, nonatomic) MDCCornerTreatment *topLeftCorner; // @synthesize topLeftCorner=_topLeftCorner;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initCornersWithFamily:(long long)arg1 andSize:(double)arg2;
- (id)init;

@end

