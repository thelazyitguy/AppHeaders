//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GOOGRTCVideoCapturerDelegate-Protocol.h>

@class NSString;

@interface RTCObjCVideoSourceAdapter : NSObject <GOOGRTCVideoCapturerDelegate>
{
    // Error parsing type: ^{ObjCVideoTrackSource=^^?^^?^^?{list<webrtc::ObserverInterface *, std::__1::allocator<webrtc::ObserverInterface *> >={__list_node_base<webrtc::ObserverInterface *, void *>=^{__list_node_base<webrtc::ObserverInterface *, void *>}^{__list_node_base<webrtc::ObserverInterface *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<webrtc::ObserverInterface *, void *> > >=Q}}{VideoAdapter=^^?iiiiiiBii{optional<long long>=B(?=q{dummy_type=[8{empty_struct=}]})}{optional<std::__1::pair<int, int> >=B(?={pair<int, int>=ii}{dummy_type=[8{empty_struct=}]})}{optional<int>=B(?=i{dummy_type=[4{empty_struct=}]})}{optional<std::__1::pair<int, int> >=B(?={pair<int, int>=ii}{dummy_type=[8{empty_struct=}]})}{optional<int>=B(?=i{dummy_type=[4{empty_struct=}]})}{optional<int>=B(?=i{dummy_type=[4{empty_struct=}]})}iii{Mutex={MutexImpl={Mutex={atomic<long>={__cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> >=Aq}}}}}}{Mutex={MutexImpl={Mutex={atomic<long>={__cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> >=Aq}}}}}{optional<webrtc::VideoTrackSourceInterface::Stats>=B(?={Stats=ii}{dummy_type=[8{empty_struct=}]})}{VideoBroadcaster=^^?{vector<rtc::VideoSourceBase::SinkPair, std::__1::allocator<rtc::VideoSourceBase::SinkPair> >=^{SinkPair}^{SinkPair}{__compressed_pair<rtc::VideoSourceBase::SinkPair *, std::__1::allocator<rtc::VideoSourceBase::SinkPair> >=^{SinkPair}}}^^?{Mutex={MutexImpl={Mutex={atomic<long>={__cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> >=Aq}}}}}{VideoSinkWants=BBi{optional<int>=B(?=i{dummy_type=[4{empty_struct=}]})}ii}{scoped_refptr<webrtc::VideoFrameBuffer>=^{VideoFrameBuffer}}B}{VideoBroadcaster=^^?{vector<rtc::VideoSourceBase::SinkPair, std::__1::allocator<rtc::VideoSourceBase::SinkPair> >=^{SinkPair}^{SinkPair}{__compressed_pair<rtc::VideoSourceBase::SinkPair *, std::__1::allocator<rtc::VideoSourceBase::SinkPair> >=^{SinkPair}}}^^?{Mutex={MutexImpl={Mutex={atomic<long>={__cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> >=Aq}}}}}{VideoSinkWants=BBi{optional<int>=B(?=i{dummy_type=[4{empty_struct=}]})}ii}{scoped_refptr<webrtc::VideoFrameBuffer>=^{VideoFrameBuffer}}B}{TimestampAligner=iqqqq}@}, name: _objCVideoTrackSource
}

// Error parsing type for property objCVideoTrackSource:
// Property attributes: T^{ObjCVideoTrackSource=^^?^^?^^?{list<webrtc::ObserverInterface *, std::__1::allocator<webrtc::ObserverInterface *> >={__list_node_base<webrtc::ObserverInterface *, void *>=^{__list_node_base<webrtc::ObserverInterface *, void *>}^{__list_node_base<webrtc::ObserverInterface *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<webrtc::ObserverInterface *, void *> > >=Q}}{VideoAdapter=^^?iiiiiiBii{optional<long long>=B(?=q{dummy_type=[8{empty_struct=}]})}{optional<std::__1::pair<int, int> >=B(?={pair<int, int>=ii}{dummy_type=[8{empty_struct=}]})}{optional<int>=B(?=i{dummy_type=[4{empty_struct=}]})}{optional<std::__1::pair<int, int> >=B(?={pair<int, int>=ii}{dummy_type=[8{empty_struct=}]})}{optional<int>=B(?=i{dummy_type=[4{empty_struct=}]})}{optional<int>=B(?=i{dummy_type=[4{empty_struct=}]})}iii{Mutex={MutexImpl={Mutex={atomic<long>={__cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> >=Aq}}}}}}{Mutex={MutexImpl={Mutex={atomic<long>={__cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> >=Aq}}}}}{optional<webrtc::VideoTrackSourceInterface::Stats>=B(?={Stats=ii}{dummy_type=[8{empty_struct=}]})}{VideoBroadcaster=^^?{vector<rtc::VideoSourceBase::SinkPair, std::__1::allocator<rtc::VideoSourceBase::SinkPair> >=^{SinkPair}^{SinkPair}{__compressed_pair<rtc::VideoSourceBase::SinkPair *, std::__1::allocator<rtc::VideoSourceBase::SinkPair> >=^{SinkPair}}}^^?{Mutex={MutexImpl={Mutex={atomic<long>={__cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> >=Aq}}}}}{VideoSinkWants=BBi{optional<int>=B(?=i{dummy_type=[4{empty_struct=}]})}ii}{scoped_refptr<webrtc::VideoFrameBuffer>=^{VideoFrameBuffer}}B}{VideoBroadcaster=^^?{vector<rtc::VideoSourceBase::SinkPair, std::__1::allocator<rtc::VideoSourceBase::SinkPair> >=^{SinkPair}^{SinkPair}{__compressed_pair<rtc::VideoSourceBase::SinkPair *, std::__1::allocator<rtc::VideoSourceBase::SinkPair> >=^{SinkPair}}}^^?{Mutex={MutexImpl={Mutex={atomic<long>={__cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> >=Aq}}}}}{VideoSinkWants=BBi{optional<int>=B(?=i{dummy_type=[4{empty_struct=}]})}ii}{scoped_refptr<webrtc::VideoFrameBuffer>=^{VideoFrameBuffer}}B}{TimestampAligner=iqqqq}@},N,V_objCVideoTrackSource

- (void)capturer:(id)arg1 didCaptureVideoFrame:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

