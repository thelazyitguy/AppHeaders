//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class GMMUserIncidentReportRequest, GMSx_GMMTrafficIncidentsRequestProto;
@protocol GMSNetworkFetcherRequest;

@protocol GMSMobileMapsTrafficService <NSObject>
- (id <GMSNetworkFetcherRequest>)RPCToGetTrafficIncidentWithRequest:(GMSx_GMMTrafficIncidentsRequestProto *)arg1 handler:(void (^)(GMSx_GMMTrafficIncidentsResponseProto *, NSError *))arg2;
- (void)getTrafficIncidentWithRequest:(GMSx_GMMTrafficIncidentsRequestProto *)arg1 handler:(void (^)(GMSx_GMMTrafficIncidentsResponseProto *, NSError *))arg2;
- (id <GMSNetworkFetcherRequest>)RPCToWriteTrafficIncidentWithRequest:(GMMUserIncidentReportRequest *)arg1 handler:(void (^)(GMMUserIncidentReportResponse *, NSError *))arg2;
- (void)writeTrafficIncidentWithRequest:(GMMUserIncidentReportRequest *)arg1 handler:(void (^)(GMMUserIncidentReportResponse *, NSError *))arg2;
@end
