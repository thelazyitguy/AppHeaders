//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/DSCStreamCoding-Protocol.h>
#import <ChromeInternal/NSCopying-Protocol.h>

@class DSCInsets, DSCSize, NSString, NSURL;

@interface DSCImage : NSObject <NSCopying, DSCStreamCoding>
{
    DSCSize *_size;
    DSCSize *_sizeDP;
    DSCInsets *_insetsDP;
    NSURL *_URL;
    NSURL *_URLforRTL;
    NSURL *_darkThemeURL;
    NSURL *_darkThemeURLforRTL;
    unsigned long long _URLType;
    NSURL *_infoURL;
    double _aspectRatio;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) NSURL *infoURL; // @synthesize infoURL=_infoURL;
@property(readonly, nonatomic) unsigned long long URLType; // @synthesize URLType=_URLType;
@property(readonly, nonatomic) NSURL *darkThemeURLforRTL; // @synthesize darkThemeURLforRTL=_darkThemeURLforRTL;
@property(readonly, nonatomic) NSURL *darkThemeURL; // @synthesize darkThemeURL=_darkThemeURL;
@property(readonly, nonatomic) NSURL *URLforRTL; // @synthesize URLforRTL=_URLforRTL;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) DSCInsets *insetsDP; // @synthesize insetsDP=_insetsDP;
@property(readonly, nonatomic) DSCSize *sizeDP; // @synthesize sizeDP=_sizeDP;
@property(readonly, nonatomic) DSCSize *size; // @synthesize size=_size;
- (_Bool)encodeToStream:(id)arg1 error:(id *)arg2;
- (id)initWithStream:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSize:(id)arg1 sizeDP:(id)arg2 insetsDP:(id)arg3 URL:(id)arg4 URLforRTL:(id)arg5 darkThemeURL:(id)arg6 darkThemeURLforRTL:(id)arg7 URLType:(unsigned long long)arg8 infoURL:(id)arg9 aspectRatio:(double)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

