//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GWAServerUtilities : NSObject
{
}

+ (void)resetRequestID;
+ (void)receivedResponseFromRequestWithID:(id)arg1;
+ (id)URLEncode:(id)arg1;
+ (long long)cameraPermissionState;
+ (id)imageCacheName;
+ (id)dictionaryFromInterleavedKeyValueArray:(id)arg1;
+ (double)currentMediaTime;
+ (_Bool)panPassesLuhnCheck:(id)arg1;
+ (id)trimNonDigits:(id)arg1;
+ (id)userPreferredLanguageCode;
+ (_Bool)doesInstrumentOptionHaveFixForm:(id)arg1;
+ (_Bool)isInstrumentOptionEnabled:(id)arg1;
+ (id)formHeaderFromInstrumentForm:(id)arg1;
+ (_Bool)addressFormShouldHaveSeparateNameSection:(id)arg1;
+ (void)setUpNetworkImageView:(id)arg1 withImageWithCaption:(id)arg2 darkMode:(_Bool)arg3;
+ (id)tintColorFromImageWithCaption:(id)arg1;
+ (_Bool)canTintImageForEmbeddedURLString:(id)arg1;
+ (id)embeddedImageForId:(int)arg1 darkMode:(_Bool)arg2;
+ (id)imageForEmbeddedUri:(id)arg1 darkMode:(_Bool)arg2;
+ (id)imageFromImageWithCaption:(id)arg1 darkMode:(_Bool)arg2;
+ (id)imageFromImageWithCaption:(id)arg1;
+ (id)embeddedURIForImage:(int)arg1;
+ (_Bool)isEmbeddedURI:(id)arg1;
+ (_Bool)legalMessageSetIsEmpty:(id)arg1;
+ (id)baseRequestContext:(id)arg1;
+ (void)initialize;

@end
