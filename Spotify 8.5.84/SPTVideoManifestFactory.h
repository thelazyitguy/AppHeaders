//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BMSubtitleFactory, SPTVideoManifestProfileFactory;

@interface SPTVideoManifestFactory : NSObject
{
    SPTVideoManifestProfileFactory *_manifestProfileFactory;
    BMSubtitleFactory *_subtitleFactory;
}

+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) BMSubtitleFactory *subtitleFactory; // @synthesize subtitleFactory=_subtitleFactory;
@property(retain, nonatomic) SPTVideoManifestProfileFactory *manifestProfileFactory; // @synthesize manifestProfileFactory=_manifestProfileFactory;
- (id)sanitizeTemplateString:(id)arg1;
- (id)createWithDictionary:(id)arg1 error:(id *)arg2;
- (id)createFromJSONData:(id)arg1 error:(id *)arg2;
- (id)initWithManifestProfileFactory:(id)arg1 subtitleFactory:(id)arg2;

@end

