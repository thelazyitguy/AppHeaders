//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AFNetworking/AFHTTPSessionManager.h>

@interface DDHTTPSessionManager : AFHTTPSessionManager
{
    CDUnknownBlockType _authenticationBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType authenticationBlock; // @synthesize authenticationBlock=_authenticationBlock;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)trackReauthenticationFailure;

@end
