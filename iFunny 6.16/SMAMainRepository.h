//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAMainRepositoryProtocol-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SMAMainRepository : NSObject <SMAMainRepositoryProtocol>
{
    Class _adLoadingExecuterClass;
    NSMutableDictionary *_adPlaces;
}

+ (void)stopRepository;
+ (id)shared;
@property(retain, nonatomic) NSMutableDictionary *adPlaces; // @synthesize adPlaces=_adPlaces;
@property(retain, nonatomic) Class adLoadingExecuterClass; // @synthesize adLoadingExecuterClass=_adLoadingExecuterClass;
- (void).cxx_destruct;
- (id)executeWith:(id)arg1 adTypeStrategy:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
