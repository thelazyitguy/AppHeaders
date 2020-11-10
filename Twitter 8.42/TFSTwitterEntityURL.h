//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterEntity.h>

@class NSString;

@interface TFSTwitterEntityURL : TFSTwitterEntity
{
    NSString *_url;
    NSString *_expandedURL;
    NSString *_originalDisplayURL;
    NSString *_adsOverrideURL;
    NSString *_htmlTitle;
    NSString *_customTitle;
}

+ (id)encodableName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(readonly, copy, nonatomic) NSString *htmlTitle; // @synthesize htmlTitle=_htmlTitle;
@property(readonly, copy, nonatomic) NSString *adsOverrideURL; // @synthesize adsOverrideURL=_adsOverrideURL;
@property(readonly, copy, nonatomic) NSString *originalDisplayURL; // @synthesize originalDisplayURL=_originalDisplayURL;
@property(readonly, copy, nonatomic) NSString *expandedURL; // @synthesize expandedURL=_expandedURL;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)representsURL:(id)arg1;
@property(readonly, copy, nonatomic) NSString *imageURLString;
@property(readonly, nonatomic) struct CGSize imageDimensions;
- (_Bool)isMedia;
- (_Bool)isVideo;
- (_Bool)isImage;
- (_Bool)isAnimatedGif;
@property(readonly, copy, nonatomic) NSString *networkURL;
@property(readonly, nonatomic) NSString *accessibilityText;
@property(readonly, copy, nonatomic) NSString *displayTitle;
@property(readonly, copy, nonatomic) NSString *displayURL;
- (long long)rangeFlavor;
@property(readonly, copy, nonatomic) NSString *displayString;
- (void)_setEntityURLPropertiesForCopy:(id)arg1;
- (id)copyWithAdsOverrideURL:(id)arg1;
- (id)copyWithURL:(id)arg1;
- (id)copyWithHTMLTitle:(id)arg1;
- (id)copyWithCustomTitle:(id)arg1;
- (id)copyWithOriginalDisplayURL:(id)arg1;
- (id)copyWithRange:(struct _NSRange)arg1;
- (void)encodeWithEncoder:(id)arg1;
- (id)initWithDecoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 strict:(_Bool)arg2;
- (id)initWithUrl:(id)arg1;
- (id)initWithUrl:(id)arg1 customTitle:(id)arg2;
- (id)initWithRange:(struct _NSRange)arg1 url:(id)arg2 expandedURL:(id)arg3 originalDisplayURL:(id)arg4 htmlTitle:(id)arg5 customTitle:(id)arg6;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)asDisplayTextRange;

@end

