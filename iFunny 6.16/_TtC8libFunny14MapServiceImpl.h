//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFNetworkService.h>

__attribute__((visibility("hidden")))
@interface _TtC8libFunny14MapServiceImpl : IFNetworkService
{
    // Error parsing type: , name: observers
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithNetworkClient:(id)arg1;
- (void)loadMapUsers:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)setMemeGeoLocationWithContentId:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)answerLocationRequestWithUserId:(id)arg1 isAccept:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)answerRequestWithRequest:(id)arg1 isAccept:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)trackLocationWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)loadSimpleMapObjectsWithLatitudeLeftBottom:(double)arg1 longitudeLeftBottom:(double)arg2 latitudeRightTop:(double)arg3 longitudeRightTop:(double)arg4 contentLimit:(long long)arg5 userLimit:(long long)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (id)loadItemsWithLatitudeLeftBottom:(double)arg1 longitudeLeftBottom:(double)arg2 latitudeRightTop:(double)arg3 longitudeRightTop:(double)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)requestLocationWithUser:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)loadLocationRequestsWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)mapUpdated;
- (void)addWithObserver:(id)arg1;

@end

