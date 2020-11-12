//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSNumber, NSString, NSURL;

@interface AIRListingFloatingMessage : AIRModel
{
    NSString *_message;
    NSNumber *_reviewRating;
    NSURL *_imageUrl;
}

+ (id)customTransformers;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(readonly, copy, nonatomic) NSNumber *reviewRating; // @synthesize reviewRating=_reviewRating;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;

@end

