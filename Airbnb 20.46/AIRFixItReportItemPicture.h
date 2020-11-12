//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSDate, NSString, NSURL;

@interface AIRFixItReportItemPicture : AIRModel
{
    NSString *_pictureID;
    NSDate *_createdAt;
    NSURL *_small;
    NSURL *_xLarge;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *xLarge; // @synthesize xLarge=_xLarge;
@property(readonly, copy, nonatomic) NSURL *small; // @synthesize small=_small;
@property(readonly, copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, copy, nonatomic) NSString *pictureID; // @synthesize pictureID=_pictureID;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *largestURL;

@end
