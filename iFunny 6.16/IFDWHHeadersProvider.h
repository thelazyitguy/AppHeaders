//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFNetworkClientSettingsHeadersProviding-Protocol.h>

@class IFNetworkClientSettingsHeadersProvider;

@interface IFDWHHeadersProvider : NSObject <IFNetworkClientSettingsHeadersProviding>
{
    IFNetworkClientSettingsHeadersProvider *_headersProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IFNetworkClientSettingsHeadersProvider *headersProvider; // @synthesize headersProvider=_headersProvider;
- (id)authorizationHeader;
- (id)additionalHeaders;
- (id)initWithHeadersProvider:(id)arg1;

@end
