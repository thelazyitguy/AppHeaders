//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class FeedPostOptions;

@interface FeedPostTextOptions : NSObject <NSCopying>
{
    _Bool _shouldDimReadPost;
    _Bool _shouldShowFlair;
    _Bool _shouldShowMetaFlair;
    _Bool _shouldShowSelfText;
    _Bool _shouldApplyTextContainerInset;
    FeedPostOptions *_feedPostOptions;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldApplyTextContainerInset; // @synthesize shouldApplyTextContainerInset=_shouldApplyTextContainerInset;
@property(nonatomic) _Bool shouldShowSelfText; // @synthesize shouldShowSelfText=_shouldShowSelfText;
@property(nonatomic) _Bool shouldShowMetaFlair; // @synthesize shouldShowMetaFlair=_shouldShowMetaFlair;
@property(nonatomic) _Bool shouldShowFlair; // @synthesize shouldShowFlair=_shouldShowFlair;
@property(nonatomic) _Bool shouldDimReadPost; // @synthesize shouldDimReadPost=_shouldDimReadPost;
@property(nonatomic) __weak FeedPostOptions *feedPostOptions; // @synthesize feedPostOptions=_feedPostOptions;
- (_Bool)isCompactMode;
@property(readonly, nonatomic) struct CGSize thumbnailSizeWithInsets;
@property(readonly, nonatomic) struct UIEdgeInsets thumbnailInsets;
@property(readonly, nonatomic) struct CGSize thumbnailSize;
@property(readonly, nonatomic) struct UIEdgeInsets indicatorInset;
@property(readonly, nonatomic) struct UIEdgeInsets pillsInset;
@property(readonly, nonatomic) struct UIEdgeInsets contentInset;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
