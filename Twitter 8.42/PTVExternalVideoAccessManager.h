//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVVideoAccessManager.h>

@class PTVAccessVideo;

@interface PTVExternalVideoAccessManager : PTVVideoAccessManager
{
    _Bool _isFetching;
    PTVAccessVideo *_externalVideoAccess;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) PTVAccessVideo *externalVideoAccess; // @synthesize externalVideoAccess=_externalVideoAccess;
- (void)updateExternalVideoAccess:(id)arg1;
- (id)initWithExternalVideoAccess:(id)arg1;
- (void)fetchVideoAccessWithCachePolicy:(long long)arg1;

@end

