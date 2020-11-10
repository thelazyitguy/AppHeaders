//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol MdxConnectionDelegate;

@protocol MdxConnection <NSObject>
@property(retain) id <MdxConnectionDelegate> delegate;
- (void)disconnect:(_Bool)arg1;
- (void)sendMessageBody:(NSString *)arg1 toURL:(NSString *)arg2 error:(id *)arg3;
- (void)handshakeForMdxSession:(NSString *)arg1 intent:(long long)arg2 nonce:(long long)arg3 callback:(void (^)(id <MdxConnection>, NSError *))arg4;
- (NSDictionary *)handshakeData;
- (NSString *)connectionScheme;
- (unsigned long long)connectionState;
@end
