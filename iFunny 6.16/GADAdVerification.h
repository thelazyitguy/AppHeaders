//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADOMIDPartner, GADOMIDSDK, NSString;

@interface GADAdVerification : NSObject
{
    Class _GADOMIDPartner;
    Class _GADOMIDSDK;
    Class _GADOMIDAdSessionConfiguration;
    Class _GADOMIDAdSessionContext;
    Class _GADOMIDAdSession;
    Class _GADOMIDAdEvents;
    GADOMIDSDK *_sharedGADOMID;
    _Bool _enableOMIDFeatures;
    GADOMIDPartner *_partner;
}

+ (id)sharedInstance;
@property(retain, nonatomic) GADOMIDPartner *partner; // @synthesize partner=_partner;
- (void).cxx_destruct;
- (id)adEventsForSession:(id)arg1;
- (id)adSessionForWebViewController:(id)arg1 mediaType:(long long)arg2 contentURL:(id)arg3 impressionType:(unsigned long long)arg4 adType:(id)arg5;
@property(readonly, nonatomic) NSString *OMIDVersion;
- (id)init;

@end
