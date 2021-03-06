//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/FBAdDSLFullScreenAdViewControllerDataSource-Protocol.h>

@class FBAdDSLViewModel, NSString;

@interface FBAdDSLFullScreenAdDataProvider : NSObject <FBAdDSLFullScreenAdViewControllerDataSource>
{
    NSString *_authKey;
    NSString *_sdkVersion;
    NSString *_interfaceName;
    FBAdDSLViewModel *_adModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBAdDSLViewModel *adModel; // @synthesize adModel=_adModel;
@property(readonly, copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(readonly, copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(readonly, copy, nonatomic) NSString *authKey; // @synthesize authKey=_authKey;
- (id)getDictionaryFromExtraData:(id)arg1 error:(id *)arg2;
- (id)setAssetsMessage;
- (id)remoteHTMLURLRequestFromViewController:(id)arg1;
@property(readonly, nonatomic) _Bool isHTMLReadyToPresent;
@property(readonly, nonatomic) _Bool isEveryAssetReadyToPresent;
- (id)localHTMLFileURLFromViewController:(id)arg1;
- (id)commonAssetsDirectoriesURLFromViewController:(id)arg1;
- (unsigned long long)HTMLFileloadSourceFromViewController:(id)arg1;
- (id)dslFullScreenAdViewController:(id)arg1 messageToWebViewWithEvent:(unsigned long long)arg2;
- (id)initWithDataModel:(id)arg1 sdkVersion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

