//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class FBAdDSLFullScreenAdViewController, NSDictionary, NSString, NSURL, NSURLRequest;

@protocol FBAdDSLFullScreenAdViewControllerDataSource <NSObject>
@property(readonly, copy, nonatomic) NSString *interfaceName;
@property(readonly, copy, nonatomic) NSString *authKey;
@property(readonly, copy, nonatomic) NSString *sdkVersion;
- (NSDictionary *)getDictionaryFromExtraData:(id)arg1 error:(id *)arg2;
- (NSURLRequest *)remoteHTMLURLRequestFromViewController:(FBAdDSLFullScreenAdViewController *)arg1;
- (NSURL *)commonAssetsDirectoriesURLFromViewController:(FBAdDSLFullScreenAdViewController *)arg1;
- (NSURL *)localHTMLFileURLFromViewController:(FBAdDSLFullScreenAdViewController *)arg1;
- (unsigned long long)HTMLFileloadSourceFromViewController:(FBAdDSLFullScreenAdViewController *)arg1;
- (NSString *)dslFullScreenAdViewController:(FBAdDSLFullScreenAdViewController *)arg1 messageToWebViewWithEvent:(unsigned long long)arg2;
@end
