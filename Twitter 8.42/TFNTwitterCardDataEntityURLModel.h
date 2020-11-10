//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterCardContextModel-Protocol.h>

@class NSString, TFSTwitterEntityURL;

@interface TFNTwitterCardDataEntityURLModel : NSObject <TFNTwitterCardContextModel>
{
    TFSTwitterEntityURL *_entityURL;
}

+ (id)entityURLFromCardDataSource:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFSTwitterEntityURL *entityURL; // @synthesize entityURL=_entityURL;
@property(readonly, nonatomic) NSString *expandedURL;
@property(readonly, nonatomic) NSString *displayURL;
@property(readonly, nonatomic) NSString *customTitle;
@property(readonly, nonatomic) NSString *URL;
- (id)initWithCardContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

