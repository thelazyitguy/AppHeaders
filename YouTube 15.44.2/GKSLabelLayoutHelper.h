//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKSLabelLayoutHelper : NSObject
{
}

+ (struct CGSize)boundingBoxSizeForAttributedString:(id)arg1 constrainedToWidth:(double)arg2 height:(double)arg3;
+ (double)singleLineWidthForString:(id)arg1 withFont:(id)arg2;
+ (double)singleLineHeightForAttributedString:(id)arg1;
+ (double)multilineHeightForAttributedString:(id)arg1 constrainedToWidth:(double)arg2 height:(double)arg3;
+ (double)multilineHeightForAttributedString:(id)arg1 constrainedToWidth:(double)arg2;
+ (double)singleLineLabelBoundingBoxHeightForString:(id)arg1 font:(id)arg2;
+ (double)multilineLabelBoundingBoxHeightForString:(id)arg1 font:(id)arg2 constrainedToWidth:(double)arg3;
+ (double)multilineLabelBoundingBoxHeightForString:(id)arg1 attributes:(id)arg2 constrainedToWidth:(double)arg3;

@end

