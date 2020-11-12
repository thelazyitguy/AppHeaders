//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class GMMDeleteReviewPhotoRequestProto, GMMTactilePhotoTakedownRequest, GMMUserPhotoEditRequestProto, GMMUserPhotosRequestProto, GMSx_GMMPhotoVoteRequest, GMSx_GMMTactilePhotoRequestProto;
@protocol GMSNetworkFetcherRequest;

@protocol GMSMobileMapsPhotoService <NSObject>
- (id <GMSNetworkFetcherRequest>)RPCToVotePhotoWithRequest:(GMSx_GMMPhotoVoteRequest *)arg1 handler:(void (^)(GMSx_GMMPhotoVoteResponse *, NSError *))arg2;
- (void)votePhotoWithRequest:(GMSx_GMMPhotoVoteRequest *)arg1 handler:(void (^)(GMSx_GMMPhotoVoteResponse *, NSError *))arg2;
- (id <GMSNetworkFetcherRequest>)RPCToUpdatePhotoWithRequest:(GMMUserPhotoEditRequestProto *)arg1 handler:(void (^)(GMMUserPhotoEditResponseProto *, NSError *))arg2;
- (void)updatePhotoWithRequest:(GMMUserPhotoEditRequestProto *)arg1 handler:(void (^)(GMMUserPhotoEditResponseProto *, NSError *))arg2;
- (id <GMSNetworkFetcherRequest>)RPCToTakedownPhotoWithRequest:(GMMTactilePhotoTakedownRequest *)arg1 handler:(void (^)(GMMTactilePhotoTakedownResponse *, NSError *))arg2;
- (void)takedownPhotoWithRequest:(GMMTactilePhotoTakedownRequest *)arg1 handler:(void (^)(GMMTactilePhotoTakedownResponse *, NSError *))arg2;
- (id <GMSNetworkFetcherRequest>)RPCToListUserPhotosWithRequest:(GMMUserPhotosRequestProto *)arg1 handler:(void (^)(GMMUserPhotosResponseProto *, NSError *))arg2;
- (void)listUserPhotosWithRequest:(GMMUserPhotosRequestProto *)arg1 handler:(void (^)(GMMUserPhotosResponseProto *, NSError *))arg2;
- (id <GMSNetworkFetcherRequest>)RPCToListEntityPhotosWithRequest:(GMSx_GMMTactilePhotoRequestProto *)arg1 handler:(void (^)(GMSx_GMMTactilePhotoResponseProto *, NSError *))arg2;
- (void)listEntityPhotosWithRequest:(GMSx_GMMTactilePhotoRequestProto *)arg1 handler:(void (^)(GMSx_GMMTactilePhotoResponseProto *, NSError *))arg2;
- (id <GMSNetworkFetcherRequest>)RPCToDeletePhotoWithRequest:(GMMDeleteReviewPhotoRequestProto *)arg1 handler:(void (^)(GMMDeleteReviewPhotoResponseProto *, NSError *))arg2;
- (void)deletePhotoWithRequest:(GMMDeleteReviewPhotoRequestProto *)arg1 handler:(void (^)(GMMDeleteReviewPhotoResponseProto *, NSError *))arg2;
@end
